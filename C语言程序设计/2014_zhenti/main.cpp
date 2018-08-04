#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char ch;
    int num;
    node *next;
}NODE;
using namespace std;
char *fun1(char *s,char *ct);
char *fun2(char *s);
char *fun3(char *cs,char c);
NODE *CreateLink();
void *output(NODE *h);
int main()
{
//2014年第一题：
    /*char a[50]="The first blow";
    char b[50]="is half the battle";
    printf("%s\n",fun1(a,b));
    printf("%s\n",fun2(a));
    printf("%s\n",fun3(a,'i'));
    return 0;*/
//2014年第二题：
    NODE *H;
    printf("\n请输入若干行字母:");
    H=CreateLink();
    printf("\n请输出链表中字母及出现的次数:");
    output(H);
    return 0;
}
char *fun1(char *s,char *ct)
{
    char *st=s;
    while(*s)
        s++;
    while(*s++=*ct++);
    return st;
}
char *fun2(char *s)
{
    char tmp,*tmp1=s,*tmp2=s;
    while(*tmp2)
        tmp2++;
    tmp2--;
    while(tmp2-tmp1>0)
    {
        tmp=*tmp1;
        *tmp1=*tmp2;
        *tmp2=tmp;
        tmp1++;
        tmp2--;
    }
    return s;
}
char *fun3(char *cs,char c)
{
    while(*cs!=c&&*cs)
        cs++;
    if(*cs==0)
        cs=NULL;
    return (char *)cs;
}
NODE *CreateLink()
{
    NODE *l=NULL,*p;
    char buf[100]={0};
    gets(buf);
    while(strlen(buf))
    {
        char *p=buf;
        while(*p)
        {
            NODE *pNode=l;
            while(pNode)
            {
                if(*p==pNode->ch)
                {
                    pNode->num++;
                    break;
                }
                else
                    pNode=pNode->next;
            }
            if(!pNode)
            {
                if(l==NULL)
                {
                    l=(NODE*)malloc(sizeof(NODE));
                    l->next=NULL;
                    l->ch=*p;
                    l->num=1;
                }
                else{
                    pNode=(NODE*)malloc(sizeof(NODE));
                    pNode->ch=*p;
                    pNode->num=1;
                    pNode->next=l->next;
                    l->next=pNode;
                }
            }
            p++;
        }
        gets(buf);
    }
    return l;
}
void *output(NODE *h)
{
    while(h)
    {
        printf("\n字母%c\t出现的次数：%d",h->ch,h->num);
        h=h->next;
    }
}
