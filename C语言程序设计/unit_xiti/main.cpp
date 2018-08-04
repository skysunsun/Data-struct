#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#define N 5
#include <math.h>
using namespace std;
typedef struct
{
    char ch;
    int num;
}ELEMTYPE;
typedef struct employ
{
     int no;
     char name[20];
     int salary;
}EMPLOY;
typedef struct node
{
    int data;
    struct node *next;
}NODE;
typedef struct complex
{
double real;
double imag;
};
void sub(char*,int,int);
double *getpart(double src[],int n,double x1,double x2,double *p);
int delSpace(char *s);
char *divstring(char *src);
int lookup(char (*src)[10],int n,char (*tag)[10]);
NODE *create();
int isorder(NODE *h);
void print(NODE *h);
int reNth(NODE *h,int n);
int main()
{
//习题1：
    /*int i,k;
    ELEMTYPE alpha[]={{'a',0},{'e',0},{'i',0},{'o',0},{'u',0}};
    char line[80];
    puts("enter a line text:");
    gets(line);
    puts(line);
    for(i=0;i<strlen(line);i++)
    {
        for(k=0;k<5;k++)
            if(line[i]==alpha[k].ch)
        {
            alpha[k].num++;
            break;
        }
    }
    for(k=0;k<5;k++)
        printf("\n%c:%d",alpha[k].ch,alpha[k].num);*/
//习题2：
    char s[]="abcdefxyz";
    int n=6;
    sub(s,0,n-1);
    printf("%s\n",s);
    sub(s,n,8);
    printf("%s\n",s);
    sub(s,0,8);
    printf("%s\n",s);}
//习题3：

    /*int i;
    while(ac>1)
    {
        if(ac==2)
            for(i=0;av[1][i]!='\0';i++)
            if(av[1][i]>='a'&&av[1][i]<='z')
            av[1][i]=av[1][i]-32;
        printf("%s\n",av[ac-1]);
        */
//习题5：
    /*struct employ s[N],r[N];
    int i,sum=0,j=0;
    FILE *fp,*fq;
    if((fp=fopen("C:\\2.txt","wb"))==NULL)
    {
        printf("\ncannot open the file");
        return 1;
    }
    for(i=0;i<N;i++)
    {
        printf("NO.=");
        scanf("%d",&s[i].no);
                printf("name.=");
        scanf("%s",s[i].name);
                printf("salary.=");
        scanf("%d",&s[i].salary);
        sum=sum+s[i].salary;
        fwrite(&s[i],sizeof(employ),1,fp);
    }
    fclose(fp);
    printf("Average:%d\n",sum/N);
    if((fp=fopen("C:\\2.txt","rb"))==NULL)
    {
        printf("\ncannot open");
        return 1;
    }
    if((fq=fopen("C:\\3.txt","wb"))==NULL)
    {
        printf("\ncannot");
        return 1;
    }
    while(fread(&r[j],sizeof(employ),1,fp))
    {
        if(r[j].salary<300)
            fwrite(&r[j],sizeof(employ),1,fp);
        j++;
    }
    fclose(fp);
    fclose(fq);*/
    /*EMPLOY s[N],r[N];
  int i, j=0;
  FILE *fp,*fq;

  if ( (fp=fopen("C:\\2.txt","w+"))==NULL){
       printf("\nCannot open the file");
       return 1;
   }

  for (i=0;i<N;i++) {
     printf("NO.=");
     scanf("%d",&s[i].no);
     printf("input name:");
     scanf("%s",s[i].name);
     printf("salary=");
     scanf("%d",&s[i].salary);

     fwrite(&s[i],sizeof(EMPLOY),1,fp);
  }
  fclose(fp);
if ( (fp=fopen("C:\\2.txt","r"))==NULL){
       printf("\nCannot open the file");
       return 1;
  }
  if ( (fq=fopen("C:\\3.txt","w+"))==NULL){
       printf("\nCannot open the file");
       return 1;
   }

   while(fread(&r[j],sizeof(EMPLOY),1,fp)){
	if (r[j].salary<300) fwrite(&r[j],sizeof(EMPLOY),1,fq);
	j++;
   }
   fclose(fp);
   fclose(fq);*/

    /*for(i=0;i<N;i++)
        if(s[i].salary<300)
        printf("%d%s%d\n",s[i].no,s[i].name,s[i].salary);*/

//习题6：
    /*double src[]={4,9,16,25,36};
    int n=5,i,min=0,max=0;
    double tag[]={0};
    double *pmax=NULL,*pmin=NULL;
    for(i=0;i<n;i++)
    {
        tag[i]=sqrt(src[i]);
        printf("%lf\n",tag[i]);
        if(&src[i]>pmax)
            {pmax=&src[i];
            max=i;}
        if(&src[i]<pmin)
            {pmin=&src[i];
            min=i;}
    }
    printf("\nmin's pos is:%d.max's pos is:%d",min+1,max+1);*/
//习题7：
/*double src[N]={2.5,3.7,1.6,9.5,4.7};
   double *b;
   int i;
   double n=0;
   b=getpart(src,N,8.0,3.5,&n);
   printf("\n");
   for(i=0;i<n;i++)
    printf("%.2lf",b[i]);*/
//习题8：
    /*char s[20];
    int k;
    printf("enter a text:");
    gets(s);
    puts(s);
    k=delSpace(s);
    puts(s);
    printf("%d\n",k);*/
//习题9：
    /*char src[]="abc123ABCdDEFef";
    char *r;
    r=divstring(src);
    puts(src);
    puts(r);*/
//习题10：
    /*int i,num=0;
    char s[5][10]={"liuli","zhangsan","liuliu","lisi","wangwu"};
    char result[5][10];

    num=lookup(s,5,result);
    for(i=0;i<num;i++)
        puts(result[i]);*/
//习题11,12,13：
    /*NODE *h;
    h=create();
    print(h);
    if(isorder(h)==1)
        printf("order\n");
    else
        printf("disorder\n");
    printf("\n%d",reNth(h,5));*/
//习题14：
    /*FILE *fp;

    int i,j,n=0,x;
    if((fp=fopen("C:\\2.txt","w"))==NULL)
        {printf("\ncannot open the file");
    return 1;}
    for(i=2;i<=1000;i++)
        {for(j=2;j<i;j++)
        if(i%j==0)
        break;
        if(i==j)
        fprintf(fp,"%5d\n",i);}
        fclose(fp);
        if((fp=fopen("C:\\2.txt","r"))==NULL)
            {printf("\ncannot  the file");
        return 1;}
        fscanf(fp,"%d",&x);
        while(!feof(fp))
        {
            printf("%5d",x);
            n++;
            if(n%10==0)
                printf("\n");
            fscanf(fp,"%d",&x);
        }
        fclose(fp);*/
//编程题1：
    /*struct complex m,n,t;
    printf("enter one complex:");
    scanf("%lf%lf",&m.real,&m.imag);
    printf("enter two complex:");
    scanf("%lf%lf",&n.real,&n.imag);
    t.real=m.real+n.real;
    t.imag=m.imag+n.imag;
    printf("%lf+%lfi",t.real,t.imag);*/
//编程题2：
    /*int x;
    NODE *h=NULL,*p,*q,*r;
    printf("please enter a num:");
    scanf("%d",&x);
    while(x>0)
    {
        p=(NODE*)malloc(sizeof(NODE));
        p->data=x;
        q=h;
        while(q!=NULL&&q->data<p->data)
        {
            r=q;
            q=q->next;
        }
        if(h==q)
        {
            p->next=h;
            h=p;
        }
        else
        {
            r->next=p;
            p->next=q;
        }
        scanf("%d",&x);
    }

    while(h!=NULL)
    {
        printf("\n%d",h->data);
        h=h->next;
    }
}
int lookup(char (*src)[10],int n,char (*tag)[10])
{
    int i,k=0;
    char t[4]={'\0'};
    for(i=0;i<n;i++)
    {
        t[0]=src[i][0];
        t[1]=src[i][1];
        t[2]=src[i][2];
        if(stricmp(t,"liu")==0)
            strcpy(tag[k++],src[i]);
    }
    return k;
}*/
void sub(char *s,int m1,int m2)
{
    char a,*p;
    p=s+m2;
    s=s+m1;
    while(s<p){
        a=*s;
        *s++=*p;
        *p--=a;
    }
}
/*double *getpart(double src[],int n,double x1,double x2,double *p)
{
    int i;
    double *u,*t;
    for(i=0;i<n;i++)
        if(src[i]>x2&&src[i]<x1)
        (*p)++;
    u=(double*)malloc((*p)*malloc(sizeof(double)));
    t=u;
    for(i=0;i<n;i++)
        if(src[i]>x2&&src[i]<x1)
        *t++=src[i];
    return u;
}*/
/*int delSpace(char *s)
{
    int i=0,j=0;
    while(*(s+i)!='\0')
    {
        if(*(s+i)!=' ')
        {
            *(s+j)=*(s+i);
            j++;
        }
        i++;
    }
    *(s+j)='\0';
    return i-j;
}*/
/*char *divstring(char *src)
{
    int i=0,j=0,k=0;
    char *t;
    t=(char*)malloc(strlen(src)*sizeof(char));
    while(*(src+i)!='\0')
    {
        if(*(src+i)>='a'&&*(src+i)<='z')
        {
            *(t+k)=*(src+i);
            k++;
        }
        else{
            *(src+j)=*(src+i);
            j++;
        }
        i++;
    }
    *(src+j)='\0';
    *(t+k)='\0';
    return t;
}
int isorder(NODE *h)
{
    NODE *p;
    if(h==NULL)
        return 1;
    while(h->next!=NULL)
    {
        p=h->next;
        if(p->data<=h->data)
            return 0;
        h=h->next;
    }
    return 1;
}
NODE *create()
{
    int x;
    NODE *q,*p=NULL,*head=NULL;
    printf("\nenter:");
    scanf("%d",&x);
    while(x!=0)
    {
        q=(NODE*)malloc(sizeof(NODE));
        q->data=x;
        if(head==NULL)
            head=q;
        else
            p->next=q;
        p=q;
        scanf("%d",&x);
    }
    p->next=NULL;
    return head;
}
int reNth(NODE *h,int n)
{
    NODE *p,*q;
    p=q=h;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    if(n=1)
        return p->data;
    else if(p==q)
        return -1;
    else
    {
        q->next=NULL;
        free(q);
        reNth(h,n-1);
    }
}
void print(node *h)
{
    while(h!=NULL)
    {
        printf("%d",h->data);
        h=h->next;
    }
}*/
