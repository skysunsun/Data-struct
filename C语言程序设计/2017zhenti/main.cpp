#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct node{
int num;
double height;
struct node *next;
}NODE;
int fun2(int x);
int fun3(int j);
int fun4(char *p,char ch);
void bubbleSort(int *arry,int size);
NODE *CreateLink();
NODE *mergeLink(NODE *h_m,NODE *h_f);
NODE *bubbleSort1(NODE *head);

int main()
{
//2017年第一题：
    /*int data1[2][3]={{1,2,3,},{4,5,6}};
    int data2[6];
    int a,b;
    for(a=0;a<2;a++)
        for(b=0;b<3;b++)
        data2[a+2*b]=data1[a][b];
    for(a=0;a<6;a++)
        printf("%5d",data2[a]);
    return 0;*/
//答案：1    4    2    5    3    6
//2017年第二题：
    /*printf("%d\n",fun2(1729));
    return 0*/
//答案：19
//2017年第三题：
    /*int i;
    for(i=1;i<=3;i++)
        printf("%5d",fun3(i));*/
//答案13    20    27
//2017年第四题：
    /*char str[80]="accomodation";
    int n;
    n=fun4(str,'o');
    printf("%d%s\n",n,str);*/
//2017第二大题：
/*int number1[100]={0};
int number2[50]={0};
int i=0;
    FILE *fp,*fq;
    if((fp=fopen("data1.txt","r"))==NULL)
        printf("not open the file");
        return 0;
        while(!feof(fp)){
            fscanf(fp,"%d",&number1[i]);
            i++;
        }
        fclose(fp);
        bubbleSort(number1,100);
        for(i=0;i<50;i++)
          number2[i]=number1[i]+number2[99-i];
          if((fq=fopen("data2.txt","w"))==NULL)
              {printf("cannot open this file");
                   return 0;}
        for(int i=0;i<50;i++)
             fprintf(fq,"%d",number2[i]);
                fclose(fq);*/
//2017第三大题：
    /*NODE *H,*H_M,*H_F;
    printf("请输入男生的信息：\n");
    H_M=CreateLink();
    printf("请输入女生的信息：\n");
    H_F=CreateLink();
    H=mergeLink(H_M,H_F);
    return 0;*/
//2017第四大题：
    /*typedef struct studentinfo
    {
        int num;
        char name[20];
        char shetuan[50];
    };
    studentinfo s[n];
    studentinfo x;
    createinfo(s);
    x=findstudent(s);
    updatainfo(x);
    tongji(s);//求社团数组的长度，即每个学生的社团总数；
    统计社团人数（）；*/
}
int fun2(int x)
{
    if(x<10)
        return x;
    else
        return x%10+fun2(x/10);
}
int fun3(int j)
{
    static int a=0;
    int b=2;
    b+=4;
    a+=6;
    return a+b+j;
}
int fun4(char *p,char ch)
{
    char *q;
    int num=0;
    for(q=p;*p!='\0';p++)
        if(*p!=ch)
            *q++=*p;
        else
            num++;
        *q='\0';
        return num;
}
/*void bubbleSort(int *arry,int size)
{
    for(int i=0;i<size;i++)
        for(int j=0;j<size-i-1;j++)
        if(arry[j]>arry[j+1])
        {int temp=arry[j];
            arry[j]=arry[j+1];
            arry[j+1]=temp;
        }
}*/
NODE *bubbleSort1(NODE *head)
{
    NODE *cur=NULL;
    NODE *teil=NULL;
    cur=head->next;
    while(cur!=teil)
    {
        while(cur->next!=teil)
        {
            if(cur->height>cur->next->height)
            {
                double tmp_height=cur->height;
                cur->height=cur->next->height;
                cur->next->height=tmp_height;
                int tmp_num=cur->num;
                cur->num=cur->next->num;
                cur->next->num=tmp_height;
            }
            cur=cur->next;

        }
        teil=cur;
        cur=head->next;
    }
    return head;
}

NODE *CreateLink()
{
    NODE *l=NULL;
    NODE *p=NULL;
    int num=-1;
    l=(NODE*)malloc(sizeof(NODE));
    if(l==NULL)
        return l;
        l->next=NULL;
        printf("请输入学号（-1）结束：");
    scanf("%d",&num);
    while(num!=-1)
    {
        p=(NODE*)malloc(sizeof(NODE));
        if(p==NULL)
        {
            printf("内存分配失败！");
            l=bubbleSort1(l);
            return l;
        }
        p->num=num;
        printf("请输入身高：");
        scanf("%lf",&p->height);
        p->next=NULL;
        p->next=l->next;
        l->next=p;
        num=-1;
        printf("请输入学号：");
        scanf("%d",&num);

    }
        l=bubbleSort1(l);
        return l;
}
NODE *mergeLink(NODE *h_m,NODE *h_f)
{
    NODE *pm=h_m->next;
    NODE *pf=h_f->next;
    NODE *h_mf=h_m;
    NODE *pmf=h_mf;
    while((pm!=NULL)&&(pf!=NULL))
    {
        if(pm->height<=pf->height)
            {pmf->next=pm;
            pmf=pm;
        pm=pm->next;}
        else
            {pmf->next==pf;
             pmf=pf;
             pf=pf->next;}
    }
    if(pm!=NULL)
       pmf->next=pm;
    else
        pmf->next=pf;
    h_f->next=NULL;
    free(h_f);
    return h_mf;
}
