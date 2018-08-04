#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
typedef struct node{
int elem;
struct node *next;
}NODE;
NODE *create();
void output(NODE *p);
NODE *merge(NODE *p1,NODE *p2);
int lookup(NODE *p,int elem);

 main()
{NODE *list1,*list2,*list;
system("cls");
printf("\nplease enter set1,<-1 end>:");
list1=create();
printf("\nset1:");
output(list1);
printf("\nplease input set2,<-1 end>:");
list2=create();
printf("\nset2:");
output(list2);
list=merge(list1,list2);
printf("\nMerger:");
output(list);
}
NODE *create(){
int d;
NODE *s, *head;
head=NULL;
while(1){
    scanf("%d",&d);
    if(d==-1)
        return head;
    if(!lookup(head,d)){
        s=(NODE*)malloc(sizeof(NODE));
        if(s==NULL)
            return head;
            s->elem=d;
            s->next=head;
            head=s;
            }
        }
}
void output(NODE*p){
printf("\n[");
for(;p!=NULL;p=p->next)
    printf("%4d",p->elem);
    printf("]");
}
NODE *merge(NODE *p1,NODE *p2){
NODE*s;
    if(p1==NULL&&p2==NULL)
        return NULL;
    s=(NODE*)malloc(sizeof(NODE));
    if(s==NULL)
        return NULL;
    if(p1!=NULL){
        if(lookup(p2,p1->elem))
            return merge(p1->next,p2);
        s->elem=p1->elem;
        s->next=merge(p1->next,p2);
    }else{
    s->elem=p2->elem;
    s->next=merge(p1,p2->next);
    }
    return s;
}
int lookup(NODE *p,int elem){
for(;p!=NULL;p->next)
    if(p->elem==elem)
        return 1;
    return 0;
}
