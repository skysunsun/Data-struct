#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define x 5
using namespace std;
typedef struct Student
{
    int No;
    int zzscore;
    int yyscore;
    int zykscore;
    int mathscore;
    int Score=zzscore+yyscore+zykscore+mathscore;
};
void inputInfo(Student[]);
void outputInfo(Student[]);
void pro(Student[]);

int main()
{
    Student s[5];
    inputInfo(s);
    outputInfo(s);
    pro(s);
}
void inputInfo(Student s[])
{
    int i;
    printf("\nplease enter the student information(No,zzscore,yyscore,zykscore,mathscore)\n");
    for(i=0;i<x;i++)
        {
            scanf("%d",&s[i].No);
            scanf("%d",&s[i].zzscore);
            scanf("%d",&s[i].yyscore);
            scanf("%d",&s[i].zykscore);
            scanf("%d",&s[i].mathscore);

           }
}
void outputInfo(Student s[])
{
    int i;

    printf("\n No zzscore yyscore zykscore mathscore");
    for(i=0;i<x;i++){
        printf("\n%d %d %d %d %d",s[i].No, s[i].zzscore, s[i].yyscore, s[i].zykscore);
    }
}
void pro(Student s[])
{
for(int i =0;i < x;i++)
        {
            for(int j = 0;j <  x - 1-i;j++)// j开始等于0，
            {
                if(s[j].Score < s[j+1].Score)
                {
                    int temp = s[j].Score;
                    s[j].Score = s[j+1].Score;
                    s[j+1].Score = temp;
                }
            }
        }
}
