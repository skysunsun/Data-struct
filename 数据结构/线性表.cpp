//线性表定义
#define maxsize=100 
typedef struct 
{
	int data[maxsize];
int length;
}Sqlist;

//常用定义
int data[maxsize];
int length;

//线性表初始化
void initList(Sqlist &L)
{
	length=0;
}

//元素的插入
int insert (Sqlist &L,int p,int e)
{
	int i;
	if(p<0||p>L.length||L.length==maxsize)
		return 0;
	for(i=L.lengh-1;i>p;i--)
		L.data[i+1]=L.data[i];
		L.data[p]=e;
		++(L.length);
		return 1;
}

//元素的查找
int find (Sqlist L,int e)
{
	int i;
	for(i=0;i<L.length;i++)
		if(L.data[i]==e)
			return i;
		else 
			return 0;
}

//求指定位置元素
int find Sqlist L,int p, int &e)
{
	if(p<||p>L.length-1)
		return 0;
	e=L.data[p];
	return 1;
}

//元素的删除
int delete (Sqlist &L,int p,int &e)
{
	int i;
	if(p<0||p>L.length-1)
		return 0;
	e=L.data[p];
	for(i=p;i<L.length-1;i++)
		L.data[i]=L.data[i+1];
	--(L.length)
		return 1;
}


//单链表节点定义
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode;

//尾插法创建单链表
void createList(LNode *&c,int a[],int n)
{
	LNode *s,*r;
	int i;
	c=(LNode*)malloc(sizef(LNode));
	c->next=NUll;
	r=c;
	for(i=0;i<n;++i)
	{
       s=(LNode*)malloc(sizef(LNode));
	       s->data=a[i];
	       r->next=s;
	       r=r->next;
    }
	r->next =NUll;
}

//两个递增链表尾插法归并为一个递增链表
void merge (LNode *A,LNode *B,LNode *&C)
{
	LNode *p=A->next;
	LNode *q=B->next;
	LNode *r;
	C=A;
	C->next=NULL;
	free(B);
	r=C;
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q->data)
		{
			r->next=p;
		p=p->next;
		r=r->next;
		}
		else
		{
			r->next =q;
			q=q->next;
			r=r->next;
		}
	}
	r->next =NULL;
		if(p!=NULL)
			r->next =p;
		if(q!=NULL)
			r->next =q;

}

//头插法创建单链表
void createList(LNode *&c,int a[],int n)
{
	LNode *s;
	int i;
	c->next=NULL;
	c=(LNode *)malloc(sizef(LNode));
	for(i=0;i<n;++i)
	{
		s=(LNode *)malloc(sizef(LNode));
		s->data=a[i];
		s->next=c->next;
		c->next=s;
	}
}

//两个递增链头尾插法归并为一个递减链表
void merge(LNode *A,LNode *B,LNode *&C)
{
	LNode *p=A->next;
	LNode *q=B->next;
	LNode *s;
	C=A;
	C->next=NULL;
	free(B);
	while(P!=NULL&&q!=NULL)
	{
	   if(p->data<=q->data)
	   {
		   s=p;
		   p=p->next;
		   s->next=C->next;
		   C->next=s;
	   }
	   else
	   {
		   s=q;
		   q=q->next;
		   s->next=C->next;
		   C->next=s;
	   }
	   }
	   
	   while(p!=NULL)
	   {
		   s=p;
	   p=p->next ;
	   s->next=C->next;
	   C->next=s;
	   }
	   while(q!=NULL)
	   {
		   s=q;
		   q=q->next;
		   s->next=C->next;
		   C->next=s;
	   }
}

//单链表节点查找有删除
int findanddelete(L *&C,int x)
{
	LNode *p,*q;
	p=C;
	while(p->next!=NULL)
	{
		if(p->next->data =x;)
			break;
		p=p->next;
	}
	if(p->next==NULL)
		return 0;
	else
	{
		q=p->next;
		p->next=p->next->next;
		free(q);
		return 1;
	}
}

		   
//双链表节点定义
typedef struct DLNode
{
	int data;
	struct DLNode *prior;
	struct DLNode *next;
}DLNode;

