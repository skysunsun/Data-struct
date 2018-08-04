#include <iostream>
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct paper
{
    char title[20];
    char book[20];
    char cn[10];
    int number;
    data publish;
    struct paper *next;
}paper;
typedef struct data
{
    int year;
    int month;
    int day;
};
void inputInfo(paper[]);

void select(paper[]);
int main()
{
    paper p[5];
    inputInfo(s);
    select(s);
}
void inputInfo(paper s[])
{
    int i;
    printf("\nplease enter the paper information(title,book,cn,number,data)\n");
    for(i=0;i<x;i++)
        {
            scanf("%s",p[i].title);
            scanf("%s",p[i].book);
            scanf("%s",p[i].cn);
            scanf("%d",p[i].number);
            scanf("%d%d%d",&p[i].data.year,&p[i].data.month,&p[i].data.day);

           }
}
void select(paper p[])
{

}
