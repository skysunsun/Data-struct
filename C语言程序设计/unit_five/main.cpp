#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define num 10
#include <ctype.h>
using namespace std;
void drawline(int n,char ch);
long power(int x,int y);
long factorial(int n);
double e(int x);
void readline(char maxline[]);
void input(int value[]);
void output(int value[]);
void sort(int value[]);
void anagram(int[],int);
void print(int[]);
int search(int value[],int key,int low,int high);
void modify(char[]);
int xx(int);
int w=3;
int ex();
int x=1;
int isprime(int l);
int reverse(int value);
int co(int a[],int j);
int search1(int a[],int j);
int main(int a[],int j)
{
//5-1:
   /*int x1,y1,x2,y2;
   double d;
   printf("please enter the coordinates(x1,y1,x2,y2)\n");
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   printf("\nthe first coor:%d %d",x1,y1);
      printf("\nthe second coor:%d %d",x2,y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("\nthe d is %f",d);*/
//5-2:
//5-3：
    /*int i,j;
    printf("\n        9.9table\n");
    drawline(30,'=');
    printf("\n   1 2 3 4 5 6 7 8 9");
    drawline(30,'=');
    for(i=1;i<=9;i++)
    {
        printf("\n%3d",i);
        for(j=1;j<=9;j++)
            printf("%3d",i*j);
        if(i<9)
            drawline(30,'-');
            else
                drawline(30,'=');

    }*/
//5-4
    /*int x;
    printf("\nenter x:");
    scanf("%d",&x);
    printf("\ne^%d=%f",x,e(x));*/
//5-5
    /*char maxline[80]="";
    readline(maxline);
    printf("\n the longest line is:\n");
    puts(maxline);*/
//5-6
    /*int value[10];
    input(value);
    output(value);
    sort(value);
    output(value);*/
//5-7
   /*int d[num];
   int i;
   for(i=0;i<num;i++)
    d[i]=num-i;
   anagram(d,num);*/
//5-8
   /*int value[num],result,key;
   input(value);
   output(value);
   printf("\nenter a key:");
   scanf("%d",&key);
   result=search(value,key,0,num-1);
   if(result!=-1)
   printf("\n the %d is the %dth element",key,result);
   else
    printf("\n fail to find %d",key);*/
//习题1:
    /*char str[]="one world,one dream";
    puts(str);
    modify(str);
    puts(str);*/
//习题2：
    /*int i,k;
    k=1;
    for(i=0;i<3;i++)
        printf("xx(%d)=%d\n",i,xx(i+k)+w);*/
//习题3：
    /*int x=0;
    while(x++<5){
        x++;
        printf("\n%d",x);

    }
    x+=2;
    ex();
    printf("\n%d",x);*/
//习题4：
     /*int n=0;
    for(int i=2;i<=1000;i++)
        {if(isprime(i))
         {printf("%5d",i);
        n++;
        if(n%8==0)
        printf("\n");}
        }*/
//习题5：
    /*char t[100];
    int i;
    printf("\nplease enter a text:");
    gets(t);
    for(i=0;i<strlen(t);i++)
        if(t[i]>='A'&&t[i]<='Z')
        t[i]=t[i]+32;
    puts(t);*/
//习题6：
    /*int n;
    int item=0;
    int sum=0;
    printf("\nplease enter a num:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {item=i*(i+1);
    sum+=item;}
    printf("%d",sum);*/
//习题7：
    /*char str[10];
    long n=0;
    printf("please enter a HEX:");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0'&&str[i]<='9')
            n=n*16+str[i]-'0';
        else if(str[i]>='A'&&str[i]<='F')
            n=n*16+10+str[i]-'A';
        else if(str[i]>='a'&&str[i]<='f')
            n=n*16+10+str[i]-'a';
        else
            break;
        i++;
    }
    return n;*/
//习题9：
    /*int a;
    printf("\nplease enter a num:");
    scanf("%d",&a);
    a=reverse(a);
    printf("%d\n",a);*/
//习题10：
/*int m[]={15,2,3,4,5,6,7,8,9,10};
    co(m,10);
    search1(m,10);*/
//习题11：
    /*int nums[]={33,44,88,56,48,64,78,0,6,36};
    int scores[]={110,120,111,150,149,142,46,89,78,99};
    int ave=0;
    float sum=0;
    int q;
    for(int i=0;i<10;i++)
        sum+=scores[i];
        printf("\nthe ave is %f",sum/10);
        printf("\nplease enter the num:");
        scanf("%d",&q);
        for(int i=0;i<10;i++)
            if(nums[i]==q)
            printf("the %d is %d",q,scores[i]);
            for(int i=0;i<10;i++)
                if(scores[i]>100)
                printf("\n%d",nums[i]);*/
//习题12：
    /*char line[80],result[80];
    gets(line);
    while(line[0]!='\0')
    {
        if(strstr(line,"your sincerely"))
            strcpy(result,line);
        gets(line);
    }
    puts(result);*/
//编程题1：
    /*int m,n;
    float h;
    printf("\nplease enter two num:");
    scanf("%d%d",&m,&n);
    h=1.0*factorial(m)/factorial(m-n);
    printf("\nAnm is %f",h);*/
//编程题2：
    int i=0;
    int dec,binary[16]={0};
    printf("enter a integer:");
    scanf("%d",&dec);
    while(dec!=0)
    {
        binary[i]=dec%2;
        dec=dec/2;
        i++;
    }
    for(int j=15;j>=0;j--)
        printf("%d",binary[j]);
}
void drawline(int n,char ch)
{
    int i;
    putchar('\n');
    for(i=1;i<=n;i++)
        putchar(ch);
}
long power(int x,int y)
{
    long p=1;
    int i;
    for(i=1;i<=y;i++)
        p=p*x;
    return p;
}
long factorial(int n)
{
    int i;
    long f=1;
    for(i=2;i<=n;i++)
        f=f*i;
    return f;
}
double e(int x)
{
    double result=1.0,temp;
    int i=1;
    do{
        temp=power(x,i)*1.0/factorial(i++);
        result+=temp;
    }while(temp>=1e-6);
    return result;
}
void readline(char maxline[])
{
    char line[80];
    int maxlength=0;
    printf("\n enter text line:\n");
    int n;
    do{

        gets(line);
        n=strlen(line);
        if(n>strlen(maxline)){
            maxlength=n;
            strcpy(maxline,line);
        }
    }while(n>0);

}
void input(int value[])
{
    int i;
    printf("\nplease enter  %d integers:",num);
    for(i=0;i<num;i++)
        scanf("%d",&value[i]);
}
void output(int value[])
{
    int i;
    printf("\n");
    for(i=0;i<num;i++)
        printf("%5d",value[i]);
}
void sort(int value[])
{
    int i,j,temp;
    for(i=4;i>=1;i--)
        for(j=0;j<i;j++)
        if(value[j]>value[j+1]){
        temp=value[j];
    value[j]=value[j+1];
    value[j+1]=temp;}
}
void anagram(int d[],int n)
{
    int i,j,temp;
    if(n==1)
       {
          print(d);
    return;
       }
       for(i=0;i<n;i++)
       {
           anagram(d,n-1);
           temp=d[0];
        for(j=1;j<=n-1;j++)
            d[j-1]=d[j];
        d[n-1]=temp;
       }
}
void print(int d[])
{
    int i;
    printf("\n");
    for(i=num-1;i>=0;i--)
        printf("%d",d[i]);
}
int search(int value[],int key,int low,int high)
{
    int mid;
    if(low>high)
        return -1;
    mid=(low+high)/2;
    if(value[mid]==key)
        return mid;
    if(value[mid]<key)
        return search(value,key,mid+1,high);
    else
        return search(value,key,low,mid-1);
}
void modify(char av_str[])
{
    int i;
    for(i=0;av_str[i]!='\0';i++)
    {
        if(i==0||!isalpha(av_str[i-1]))
            av_str[i]=toupper(av_str[i]);

    }
}
int xx(int x)
{
    static int a=5;
    int b=2;
    a+=x+b;
    w++;
    return a+w;
}
int ex()
{
    x+=2;
}
int isprime(int l){
int i;
for(i=2;i<l;i++)
    if(l%i==0)
        return 0;
        return 1;

}
int reverse(int value)
{
    int a,n=1;
    a=value;
    while(a>10){
        n=n*10;
        a=a/10;
    }
    if(value/10==0)
        return value;
    else
        return value%10*n+reverse(value/10);
}
int co(int a[],int j)
{
    int n=0;
    for(int i=0;i<j;i++)
    if(a[i]%5==0)
        n++;
    printf("%d\n",n);
}
int search1(int a[],int j)
{
    for(int i=0;i<j;i++)
        if(a[i]%3==0)
        printf("%3d",a[i]);
}
