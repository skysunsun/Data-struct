#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 100
using namespace std;
typedef struct song{
int No;
char song_name[32];
char name[16];
int num;
}SONG;
void displayMenu();
int choiceItem();
int input(SONG s[]);
void browse(SONG s[],int n);
void Top10(SONG [],int n);
void vote(SONG s[],int n);

int main()
{
SONG a[N];
int n;
int choice;
 system("cls");
do{
    choice=choiceItem();
    switch(choice){
    case 1: n=input(a);break;
    case 2: browse(a,n);break;
    case 3: Top10(a,n);break;
    case 4: vote(a,n);break;
    }
}while(choice!=0);
printf("\n\nBye!!");
}
void displayMenu(){
printf("\n---------MENU----------\n");
printf("\n 1---------Input informations \n");
printf("\n 2---------Browse informations \n");
printf("\n 3---------Print Top10\n");
printf("\n 4---------Vote \n");
printf("\n 0---------Exit \n");
printf("\n-Choice:");
}
int choiceItem(){
int choice;
char line[80];
do{
    displayMenu();
    gets(line);
    choice=atoi(line);
    }while(choice<0||choice>4);
    return choice;
}
int input(SONG s[]){
char buf[256];
int i=0;
while(1){
    printf("\nplease Input No Song_Name Singer_Name \n");
    gets(buf);
    if(buf[0]=='\0')
        break;
    sscanf(buf,"%d%s%s",&s[i].No, s[i].song_name, s[i].name);
    s[i++].num=1;

}
   return i;
}
void browse(SONG s[],int n){
int i;
printf("\n Num\tSong_Name\tSinger_Name\n");
for(i=0;i<n;i++)
    printf(" %d\t%s\t\t%s\n",s[i].song_name,s[i].name);

}
void Top10(SONG s[],int n){
int i,j,k;
SONG temp[N],t;
for(i=0;i<N;i++)
    temp[i]=s[i];
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++)
    if(temp[k].num<temp[j].num)
        k=j;
        if(k!=i){
            t=temp[i];
            temp[i]=temp[k];
            temp[k]=t;
        }
    }
    printf("\n Song_Name\tSinger_Name\n");
    for(i=0;i<10&&i<n;i++)
            printf("  %s\t\t%s\n",temp[i].song_name,temp[i].name);

}
void vote(SONG s[],int n){
int i;
char buf[80];
printf("\n enter song'No:");
gets(buf);
for(i=0;i<n;i++)
    if(s[i].No==atoi(buf)){
        s[i].num++;
        printf("\nVote ok\n");
        break;
    }
    if(i==n)
        printf("error No.\n");
}
