//���һ������ԭ�ͣ���һ��ָ�����ַ�����ȡ��ǰn���ַ�
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//void zifutiqu(char x[],int n);
int main()
{
    /*char u[]={"afahahahah"};
    zifutiqu(u,5);*/
    char x[100];
int i,n;
printf("txt:");
gets(x);
printf("number:");
scanf("%d",&n);
for(i=0;i<n;i++)
    printf("%c",x[i]);
}

/*void zifutiqu(char x[],int n)
{
    for(int i=0;i<n;i++)
    printf("%c",x[i]);
}*/
