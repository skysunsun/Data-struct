#include<tree.h>
int visited[MAXV];
 
void MatToList(MGraph g,ALGraph *&G)
//将邻接矩阵g转换成邻接表G
{
    int i,j,n=g.n;                      //n为顶点数
    ArcNode *p;
    G=(ALGraph *)malloc(sizeof(ALGraph));
    for (i=0;i<n;i++)                    //给邻接表中所有头结点的指针域置初值
        G->adjlist[i].firstarc=NULL;
    for (i=0;i<n;i++)                    //检查邻接矩阵中每个元素
        for (j=n-1;j>=0;j--)
            if (g.edges[i][j]!=0)               //邻接矩阵的当前元素不为0
            {   
                p=(ArcNode *)malloc(sizeof(ArcNode));   //创建一个结点*p
                p->adjvex=j;
                p->info=g.edges[i][j];
                p->nextarc=G->adjlist[i].firstarc;        //将*p链到链表后
                G->adjlist[i].firstarc=p;
            }
    G->n=n;G->e=g.e;
}
 
void DFS(ALGraph *G,int v)  
{
    ArcNode *p;
    visited[v]=1;                   //置已访问标记
    printf("%d  ",v);               //输出被访问顶点的编号
    p=G->adjlist[v].firstarc;        //p指向顶点v的第一条弧的弧头结点
    while (p!=NULL) 
    {
        if (visited[p->adjvex]==0)   //若p->adjvex顶点未访问,递归访问它
            DFS(G,p->adjvex);    
        p=p->nextarc;                //p指向顶点v的下一条弧的弧头结点
    }
}
void DFS1(ALGraph *G,int v)
{
    ArcNode *p;
    ArcNode *St[MAXV];  
    int w,i,top=-1;
    for (i=0;i<G->n;i++) 
        visited[i]=0;       //访问标志数组初始化
    printf("%3d",v);                        //输出被访问顶点的编号
    visited[v]=1;                           //置已访问标记
     top++;    
     St[top]=G->adjlist[v].firstarc;
    while (top>-1)                   //若队列不空时循环
    {               
        p=St[top];top--; 
        while (p!=NULL)
        {   w=p->adjvex;
            if (visited[w]==0)      //若当前邻接顶点未被访问
            { printf("%3d",w);      //访问相邻顶点
                visited[w]=1;       //置该顶点已被访问的标志
                top++;
                 St[top]=G->adjlist[w].firstarc;
                 break;
            }
            p=p->nextarc;                    //找下一个邻接顶点
        }
    }
    printf("\n");
}
void BFS(ALGraph *G,int v)  
{
    ArcNode *p;
    int queue[MAXV],front=0,rear=0;         //定义循环队列并初始化
    int visited[MAXV];                      //定义存放结点的访问标志的数组
    int w,i;
    for (i=0;i<G->n;i++) visited[i]=0;        //访问标志数组初始化
    printf("%2d",v);                        //输出被访问顶点的编号
    visited[v]=1;                           //置已访问标记
    rear=(rear+1)%MAXV;
    queue[rear]=v;                          //v进队
    while (front!=rear)                     //若队列不空时循环
    {   front=(front+1)%MAXV;
        w=queue[front];                     //出队并赋给w
        p=G->adjlist[w].firstarc;            //找与顶点w邻接的第一个顶点
        while (p!=NULL) 
        {   if (visited[p->adjvex]==0)       //若当前邻接顶点未被访问
            {   printf("%2d",p->adjvex);     //访问相邻顶点
                visited[p->adjvex]=1;        //置该顶点已被访问的标志
                rear=(rear+1)%MAXV;         //该顶点进队
                queue[rear]=p->adjvex;
            }
            p=p->nextarc;                    //找下一个邻接顶点
        }
    }
    printf("\n");
}
 
 
void DispAdj(ALGraph *G)
//输出邻接表G
{
    int i;
    ArcNode *p;
    for (i=0;i<G->n;i++)
    {
        p=G->adjlist[i].firstarc;
        printf("%3d: ",i);
        while (p!=NULL)
        {
            printf("%3d",p->adjvex);
            p=p->nextarc;
        }
        printf("\n");
    }
}
     
 
 
 
void main()
{
  int i,j;
  MGraph g;
  ALGraph *G;
  int A[MAXV][6]={
      {0,5,0,7,0,0},
      {0,0,4,0,0,0},
      {8,0,0,0,0,9},
      {0,0,5,0,0,6},
      {0,0,0,5,0,0},
      {3,0,0,0,1,0}};
 
g.n=6;
g.e=10;
for(i=0;i<g.n;i++)
for(j=0;j<g.n;j++)
g.edges[i][j]=A[i][j];
G=(ALGraph *)malloc(sizeof(ALGraph));
MatToList(g,G);
printf("图G的邻接表:\n");
DispAdj(G);
printf("从顶点0开始的DFS（递归算法）:\n");
DFS(G,0);printf("\n");
printf("从顶点0开始的DFS （非递归算法）:\n");
DFS1(G,0);
printf("从顶点0开始的BFS（递归算法）:\n");
BFS(G,0);printf("\n");
}