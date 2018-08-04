#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM 30
#define king 5
#define spade 4
#define hearts 3
#define diamonds 2
#define club 1
#define MAXLINE 10
typedef struct cnode
{
    char cname[16];
    int score;
    struct cnode *next;
}CNODE;
typedef struct
{
    char name[20];
    CNODE* head;
}SNODE;
typedef struct{
int year;
int month;
int day;
}DATE;
typedef struct {
int num;
char name[24];
DATE birthday;
char department[48];
char major[32];
}STUDENTINFO;
typedef struct{
int data;
int pos;
}DATATYPE;
typedef struct{
int rank;
int suit;
}CARD;
typedef struct node{
int No;
struct node*next;
}NODE;
void inputInfo(STUDENTINFO[]);
void outputInfo(STUDENTINFO[]);
void searchInfo(STUDENTINFO[],DATE);
void inputValue(DATATYPE[]);
void outputValue(DATATYPE[]);
void selectSort(DATATYPE[],int);
void create(CARD card[]);
void riffle(CARD card[]);
void deal(CARD card[]);
int getline(char *line);
void initStuInfo(SNODE[]);
void inputCourseInfo(SNODE[],int);
void outputInfo(SNODE[]);
int main(int argc,char *argv[])
{//6-1
    /*STUDENTINFO s[NUM];
    DATE date;
    inputInfo(s);
    outputInfo(s);
    printf("\n enter a date(month,day)");
    scanf("%d%d",&date.month,&date.day);
    searchInfo(s,date);*/
//6-2
    /*DATATYPE value[NUM];
    inputValue(value);

    selectSort(value,NUM);
    outputValue(value);*/
//6-3
    /*CARD card[NUM];
    create(card);
    riffle(card);
    deal(card);*/
//6-4
    /*char textline[NUM];
    char *s;
    int charnum=0,spaccenum=0;
    printf("\n enter a string: ");
    gets(textline);
    for(s=textline;*s!='\0';s++)
        if(*s==' ')
        spaccenum++;
    else
        charnum++;
    printf("\n%d characters and %d spaces in the string.",charnum,spaccenum);*/
//6-5
    /*int a[NUM][NUM];
    int *ptr,i,j;
    for(i=0;i<NUM;i++){
        ptr=*(a+i);
        for(j=0;j<=NUM;j++)
            if(i>=j)
            *(ptr+j)=j+1;
        else
            *(ptr+j)=0;
    }
    for(i=0;i<NUM;i++){
        ptr=*(a+i);
        for(j=0;j<NUM;j++)
            printf("%3d",*(ptr+j));
        printf("\n");
    }*/
//6-6
    /*char buf[32],*p;
    char *word[64];
    int index,i,j,min;
    index=0;
    while(1){
        gets(buf);
        if(strlen(buf)==0)
            break;
        word[index]=(char*)malloc(strlen(buf)+1);
        strcpy(word[index++],buf);
    }
    for(i=0;i<index;i++)
    {
        min=i;
        for(j=i+1;j<index;j++)
            if(strcmp(word[j],word[min])<0)
            min=j;
        if(min!=i){
            p=word[i];
            word[i]=word[min];
            word[min]=p;
        }
    }
    for(i=0;i<index;i++){
        puts(word[i]);
    free(word);}*/
//6-7
    /*int *a[MAXLINE];
    int i,j,x=1;
    a[0]=&x;
    for(i=1;i<MAXLINE;i++){
        a[i]=(int*)malloc(sizeof(int)*(i+1));
        *a[i]=1;
        for(j=1;j<i;j++)
            *(a[i]+j)=*(a[i-1]+j-1)+*(a[i-1]+j);
        *(a[i]+i)=1;
    }
    for(i=0;i<MAXLINE;i++){
        for(j=0;j<=i;j++)
            printf("%4d",*(a[i]+j));
        printf("\n");
    }
    for(i-0;i<MAXLINE;i++)
        free(a[i]);*/
//6-8
    /*char line[MAXLINE];
    if(argc!=2)
    {
        printf("usage: exa text\n");
        return 0;
    }
    else
    {
        while(getline(line)>0)
            if(strstr(line,argv[1])!=NULL)
            printf("%s\n",line);
    }*/
//6-9
    /*NODE *head=NULL;
    NODE *p,*rear,*pre;
    int i,count,m;
    for(i=1;i<=NUM;i++)
    {
        p=(NODE*)malloc(sizeof(NODE));
        p->No=i;
        if(head==NULL){
            head=p;
            rear=p;}
        else
        {
            rear->next=p;
            rear=p;
        }
    }
    rear->next=head;
    printf("enter m:");
    scanf("%d",&m);
    p=head;
    while(p->next!=p){
    count=1;
    do{
        p=p->next;
        count++;
    }while(count!=m);
    for(pre=p;pre->next!=p;pre=pre->next);
    printf("%4d",p->No);
    pre->next=p->next;
    free(p);
    p=pre->next;}
    printf("%4d\n",p->No);
    free(p);*/
//6-10
    /*int i;
    SNODE s[NUM];
    initStuInfo(s);
    for(i=0;i<NUM;i++)
        inputCourseInfo(s,i);
        outputInfo(s);*/
//6-11
    /*FILE *fp;
    int ch;
    if(argc!=2)
    {
        printf("\nNo file name.");
        return 1;
    }
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open file!");
        return 1;
    }
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=fgetc(fp);
    }
    fclose(fp);*/
//6-12
    FILE *fp7,*fp28;
    int ch;
    if(argc!=3)
    {
        printf("no File name.");
        return 1;
    }
    if((fp7=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open %s\n",argv[1]);
        return 1;
    }
    if((fp28=fopen(argv[2],"w"))==NULL)
    {
        printf("cannot open %s\n",argv[2]);
        return 1;
    }
    while((ch=fgetc(fp7))!=EOF)
        fputc(ch,fp28);
    fclose(fp7);
    fclose(fp28);

}
void inputInfo(STUDENTINFO s[])
{
    int i;
    printf("\n enter %d student's information(name,birthday,department,major)\n",NUM);
    for(i=0;i<NUM;i++)
    {
        s[i].num=i+1;
        scanf("%s",s[i].name);
        scanf("%d%d%d",&s[i].birthday.year,&s[i].birthday.month,&s[i].birthday.day);
        scanf("%s",s[i].department);
        scanf("%s",s[i].major);
    }
}
void outputInfo(SNODE s[])
{
    int i;
    CNODE *p;
    for(i=0;i<NUM;i++)
    {
        printf("\n%12s: ",s[i].name);
        for(p=s[i].head;p!=NULL;p=p->next)
            printf("(%10s,%d) ",p->cname,p->score);
        printf("\n");
    }
    /*int i;
    printf("\n NUM name birthday department major\n");
    for(i=0;i<NUM;i++)
    {
        printf("\n%4d%4s  %4d/%2d/%2d%16s%16s",
               s[i].num,s[i].name,
               s[i].birthday.year,s[i].birthday.month,s[i].birthday.day,
               s[i].department,
               s[i].major);

    }*/
}
void searchInfo(STUDENTINFO s[],DATE date)
{
    int i;
    for(i=0;i<NUM;i++)
    {
        if(s[i].birthday.month>date.month){
            printf("\n%4d%16s   %2d/%2d",s[i].num,s[i].name,
                   s[i].birthday.month,s[i].birthday.day);
                   continue;
        }
        if(s[i].birthday.month==date.month&&s[i].birthday.day>date.day)
        {
            printf("\n%4d%16s   %2d/%2d",s[i].num,s[i].name,
                   s[i].birthday.month,s[i].birthday.day);
        }
    }
}
void inputValue(DATATYPE value[])
{
    int i;
    printf("\n enter %d values:",NUM);
    for(i=0;i<NUM;i++){
        scanf("%d",&value[i].data);
        value[i].pos=i+1;
    }
}
void outputValue(DATATYPE value[])
{
    int i
    ;
    for(i=0;i<NUM;i++)
        printf("\n%3d:  (%4d : %2d)",i+1,value[i].data,value[i].pos);
}
void selectSort(DATATYPE value[],int n)
{
    int i,max=0;
    DATATYPE temp;
    if(n<2)
        return;
    for(i=1;i<n;i++)
        if(value[max].data<value[i].data)
        max=i;
    if(max!=n-1){
        temp=value[n-1];
        value[n-1]=value[max];
        value[max]=temp;
    }
    selectSort(value,n-1);
}
void create(CARD card[])
{
    int i;
    for(i=0;i<NUM;i++)
    {
        card[i].rank=i%13+1;
        card[i].suit=i/13+1;
    }
}
/*void riffle(CARD card[])
{
    int i,rand1,rand2;
    CARD temp;
    for(i=0;i<1000;i++){
        rand1=rand()%1000;
        rand2=rand()%1000;
        if(rand1!=rand2){
            temp=card[rand1];
            card[rand1]=card[rand2];
            card[rand2]=temp;
        }
    }
}*/
void deal(CARD card[])
{
    int i,count;
    for(i=0;i<4;i++)
    {
        printf("\n\n%drd man:\n",i+1);
        for(count=0;count<NUM;count+=4)
        {
            if(count+i>=NUM)
                break;
            switch(card[count+i].suit)
            {
            case king:
                printf("(king,");
            case spade:
                printf("(spade,");
            case hearts:
                printf("(herats,");
            case diamonds:
                printf("(diamonds,");
            case club:
                printf("(club,");
            }
            switch(card[count+i].rank){
        case 1:
            if(card[count+i].suit==king)
                printf("Big_king)");
                else
                    printf("A) ");
                break;
        case 2:
            if(card[count+i].suit==king)
                printf("Small_king)");
            else
                printf("2)  ");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("%d) ",card[count+i].rank);
            break;
        case 11:
            printf("J)   ");
            break;
        case 12:
            printf("Q)   ");
            break;
        case 13:
            printf("K)   ");
            break;

            }
        }
    }
}
int getline(char *line){
gets(line);
return strlen(line);
}
void initStuInfo(SNODE s[])
{
    int i;
    printf("\nenter infomation of %d students:\n",NUM);
    for(i=0;i<NUM;i++)
    {
        gets(s[i].name);
        s[i].head=NULL;
    }
}
void inputCourseInfo(SNODE s[],int No)
{
    char text[80];
    int score,num,i;
    CNODE *c;
    printf("\nenter course's name&score:\n");
    for(i=1;i<=num;i++){
        gets(text);
        c=(CNODE*)malloc(sizeof(CNODE));
        sscanf(text,"%s%d",c->cname,&c->score);
        c->next=s[No].head;
        s[No].head=c;
    }
}
