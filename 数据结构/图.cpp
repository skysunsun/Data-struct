#include<tree.h>
int visited[MAXV];
 
void MatToList(MGraph g,ALGraph *&G)
//���ڽӾ���gת�����ڽӱ�G
{
    int i,j,n=g.n;                      //nΪ������
    ArcNode *p;
    G=(ALGraph *)malloc(sizeof(ALGraph));
    for (i=0;i<n;i++)                    //���ڽӱ�������ͷ����ָ�����ó�ֵ
        G->adjlist[i].firstarc=NULL;
    for (i=0;i<n;i++)                    //����ڽӾ�����ÿ��Ԫ��
        for (j=n-1;j>=0;j--)
            if (g.edges[i][j]!=0)               //�ڽӾ���ĵ�ǰԪ�ز�Ϊ0
            {   
                p=(ArcNode *)malloc(sizeof(ArcNode));   //����һ�����*p
                p->adjvex=j;
                p->info=g.edges[i][j];
                p->nextarc=G->adjlist[i].firstarc;        //��*p���������
                G->adjlist[i].firstarc=p;
            }
    G->n=n;G->e=g.e;
}
 
void DFS(ALGraph *G,int v)  
{
    ArcNode *p;
    visited[v]=1;                   //���ѷ��ʱ��
    printf("%d  ",v);               //��������ʶ���ı��
    p=G->adjlist[v].firstarc;        //pָ�򶥵�v�ĵ�һ�����Ļ�ͷ���
    while (p!=NULL) 
    {
        if (visited[p->adjvex]==0)   //��p->adjvex����δ����,�ݹ������
            DFS(G,p->adjvex);    
        p=p->nextarc;                //pָ�򶥵�v����һ�����Ļ�ͷ���
    }
}
void DFS1(ALGraph *G,int v)
{
    ArcNode *p;
    ArcNode *St[MAXV];  
    int w,i,top=-1;
    for (i=0;i<G->n;i++) 
        visited[i]=0;       //���ʱ�־�����ʼ��
    printf("%3d",v);                        //��������ʶ���ı��
    visited[v]=1;                           //���ѷ��ʱ��
     top++;    
     St[top]=G->adjlist[v].firstarc;
    while (top>-1)                   //�����в���ʱѭ��
    {               
        p=St[top];top--; 
        while (p!=NULL)
        {   w=p->adjvex;
            if (visited[w]==0)      //����ǰ�ڽӶ���δ������
            { printf("%3d",w);      //�������ڶ���
                visited[w]=1;       //�øö����ѱ����ʵı�־
                top++;
                 St[top]=G->adjlist[w].firstarc;
                 break;
            }
            p=p->nextarc;                    //����һ���ڽӶ���
        }
    }
    printf("\n");
}
void BFS(ALGraph *G,int v)  
{
    ArcNode *p;
    int queue[MAXV],front=0,rear=0;         //����ѭ�����в���ʼ��
    int visited[MAXV];                      //�����Ž��ķ��ʱ�־������
    int w,i;
    for (i=0;i<G->n;i++) visited[i]=0;        //���ʱ�־�����ʼ��
    printf("%2d",v);                        //��������ʶ���ı��
    visited[v]=1;                           //���ѷ��ʱ��
    rear=(rear+1)%MAXV;
    queue[rear]=v;                          //v����
    while (front!=rear)                     //�����в���ʱѭ��
    {   front=(front+1)%MAXV;
        w=queue[front];                     //���Ӳ�����w
        p=G->adjlist[w].firstarc;            //���붥��w�ڽӵĵ�һ������
        while (p!=NULL) 
        {   if (visited[p->adjvex]==0)       //����ǰ�ڽӶ���δ������
            {   printf("%2d",p->adjvex);     //�������ڶ���
                visited[p->adjvex]=1;        //�øö����ѱ����ʵı�־
                rear=(rear+1)%MAXV;         //�ö������
                queue[rear]=p->adjvex;
            }
            p=p->nextarc;                    //����һ���ڽӶ���
        }
    }
    printf("\n");
}
 
 
void DispAdj(ALGraph *G)
//����ڽӱ�G
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
printf("ͼG���ڽӱ�:\n");
DispAdj(G);
printf("�Ӷ���0��ʼ��DFS���ݹ��㷨��:\n");
DFS(G,0);printf("\n");
printf("�Ӷ���0��ʼ��DFS ���ǵݹ��㷨��:\n");
DFS1(G,0);
printf("�Ӷ���0��ʼ��BFS���ݹ��㷨��:\n");
BFS(G,0);printf("\n");
}