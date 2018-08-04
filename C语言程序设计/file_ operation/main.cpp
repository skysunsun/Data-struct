#include <iostream>
#include <stdio.h>
#include <string.h>
#define NUM 30
using namespace std;
typedef struct info
{
    int No;
    char name[16];
    char department[32];
    char major[32];
}INFO;
int readFile(char lines[][80]);
void writeFile(char lines[][80],int n);

int main()
{
//6-13
    /*int choice,num;
    char lines[100][80];
    do{
        printf("\n-------MENU-------\n");
        printf("\n      read file        1");
        printf("\n      write file       2");
        printf("\n      exit             3");
        printf("\n      select:");
        scanf("%d",&choice);
        getchar();
        if(choice==1)
            num=readFile(lines);
        if(choice==2)
           writeFile(lines,num);
    }while(choice!=3);*/
//6-14
    /*INFO s;
    int i;
    FILE *fp;
    char filename[32];
    printf("\n enter file name:");
    gets(filename);
    if((fp=fopen(filename,"wb"))==NULL)
    {
        printf("cannot open %s file.",filename);
        return 1;
    }
    for(i=0;i<NUM;i++)
    {
        scanf("%d%s%s%s",&s.No,s.name,s.department,s.major);
        fwrite(&s,sizeof(INFO),1,fp);
    }
    fclose(fp);
    if((fp=fopen(filename,"rb"))==NULL)
    {
        printf("\n cannot open %s file.",filename);
        return 1;
    }
    while(fread(&s,sizeof(INFO),1,fp))
        printf("\n%4d%16s%20s%20s",s.No,s.name,s.department,s.major);
    fclose(fp);*/
//6-15
    INFO s;
    int i;
    FILE *fp;
    char filename[32];
    printf("\n enter file's name:");
    gets(filename);
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("cannot open %s file.",filename);
        return 1;
    }
    for(i=0;i<NUM;i++){
        scanf("%d%s%s%s",&s.No,s.name,s.department,s.major);
        fprintf(fp,"%d %s %s %s\n", s.No, s.name, s.department, s.major);
}
fclose(fp);
    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("\n cannot open %s file.",filename);
        return 1;
    }
    while(!feof(fp)){
        fscanf(fp,"%d%s%s%s\n",&s.No,s.name,s.department,s.major);
        printf("\n%4d%16s%20s%20s",s.No,s.name,s.department,s.major);
    }
    fclose(fp);
}
int readFile(char lines[][80])
{
    int i;
    FILE *fp;
    char filename[30];
    printf("\nenter file name:");
    gets(filename);
    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("cannot open file!");
        return 0;
    }
    for(i=0;!feof(fp);i++)
    {
        fgets(&lines[i][0],80,fp);
        puts(&lines[i][0]);
    }
    fclose(fp);
    return i;
}
void writeFile(char lines[][80],int n)
{
    FILE *fp;
    char filename[30];
    printf("\nenter file name:");
    gets(filename);
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("cannot open file!");
        return;
    }
    while(n!=0)
        fputs(&lines[--n][0],fp);
    fclose(fp);
}
