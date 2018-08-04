#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
//绝对值计算
    /*int input,output;
    printf("\nplease enter an integer:");
    scanf("%d",&input);
    if(input<0)
        output=-input;
    else
        output=input;
    printf("ABS(%d)=%d\n",input, output);*/
//判断属于哪个象限
    /*int x,y;
    printf("\n please enter two integers:");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
        printf("属于第一象限");
        else if(x<0&&y>0)
        printf("属于第二象限");
        else if(x<0&&y<0)
            printf("属于第三象限");
            else
            printf("属于第四象限");*/
//实数四则运算
        /*double a,b,c;
        char op;
        printf("\nenter an expression");
        scanf("%lf%c%lf",&a,&op,&b);
        switch(op){
    case '+':
        c=a+b;
        break;
    case '-':
        c=a-b;
        break;
    case '*':
        c=a*b;
        break;
    case '/':
        c=a/b;
        break;
    default:
        printf("input error \n");
        return 0;
        }
        printf("%lf%c%lf=%lf\n",a,op,b,c);*/
//复数四则运算
/*double a,b,c,d,r,i,t;
char op;
printf("please enter the first number:");
scanf("%lf%lf",&a,&b);
fflush(stdin);
printf("please enter the two number:");
scanf("%lf%lf",&c,&d);
fflush(stdin);
printf("please enter a operator:");
scanf("%c",&op);
switch(op)
{
case '+':
    r=a+b;
    i=b+d;
    break;
case '-':
    r=a-b;
    i=b-d;
    break;
case '*':
    r=a*c-b*d;
    i=b*c+a*d;
    break;
case '/':
    t=c*c-d*d;
    if(t==0){
        printf("the denominator is 0.\n");
        return 0;
    }
    r=(a*c+b*d)/t;
    i=(b*c-a*d)/t;
    break;
default:
    printf("invalidation operator .\n");
    return 0;
}
printf("the result is %lf+%lfi\n",r,i);*/
//计算1000个数得平均值
 /*int sum=0,i=1;
 int x;
 printf("\nplease enter 1000 integers:");
 while(i<=1000)
 {
     scanf("%d",&x);
     sum=sum+x;
     i=i+1;
 }
 printf("the average value is %lf\n",sum*1.0/1000);*/
//筛选ASCII最大的字符
 /*int max=0,x;
 for(int i=0;i<8;i++)
 {
     x=getchar();
     if(x>max)
        max=x;
 }
 for(int i=0;i<10;i++)
    putchar(max);*/
//统计字符中数字总个数
    /*int ch,num=0;
    printf("please enter a text:");
    do{
        ch=getchar();
        if(ch<='9'&&ch>='0')
            num++;
    }while(ch!='\n');
    printf("num=%d\n",num);*/
//打印一个由n个字符星号组成的等边三角形
    /*int i,j,n;
    printf("enter the side of the triangle:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            putchar(' ');
        for(j=1;j<=i;j++){
            putchar('*');
            if(j!=i)
                putchar('_');
        }
        putchar('\n');
    }*/
//1到255之和
    /*int sum=0,i=1;
    while(sum+i<32767){
        sum=sum+i;
        i++;
    }
    printf("\n1+2+3......+%d=%d",i-1,sum);*/
//输出1000以内既能被3整除又能被7整除的数
    /*int i;
    for(i=1;i<=1000;i++){
        if(i%3==0&&i%7==0)
            printf("%5d",i);
    }*/
//把小写字母转换为大写字母
    /*char ch;
    do{
        ch=getchar();
        if(ch>='a'&&ch<='z')
            ch=ch-32;
        putchar(ch);
    }while(ch!='\n');*/
/*第四题：判断是否为闰年
     int y;
     printf("请输入一个年份:");
     scanf("%d",&y);
     if(y%4==0&&y%100!=0||y%400==0)
        printf("是闰年");
        else
        printf("不是闰年");*/

//第五题：判断某年某月有多少天
        /*int year,month,day;
     printf("请输入年份和月份：");
     scanf("%d%d",&year,&month);
     switch(month)
     {
 case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    day=31;
    break;
 case 4:case 6:case 9:case 11:
    day=30;
    break;
 case 2:
    if(year%400==0||(year%4==0&&year%100!=0))
        day=29;
        else
            day=28;
    }
       printf("%d年%d月份有%d天",year,month,day);*/
//第六题：输出100以内偶数的平均值
     /*int i,n=0,sum=0;
     int ave=0;
     for(i=1;i<=100;i++){
        if(i%2==0){
        sum=sum+i;
        n++;}
     }
    printf("the aveage is %d",ave=sum/n);*/
//第七题：修改英文句子的每个首先字母为大写
    /*char line[]={'0'};
    printf("please enter a text:");
    gets(line);
    puts(line);
    if(line[0]>='a'&&line[0]<='z')
        line[0]=line[0]-32;

    for(int i=1;i<strlen(line);i++)
            if(line[i-1]==' '&&line[i]>='a'&&line[i]<='z')
            line[i]=line[i]-32;
    puts(line);*/
//第八题：求两个数的最小公倍数
    /*int i,m,n;
    printf("please enter two number:");
    scanf("%d%d",&m,&n);
    for(i=1;i<n;i++)
        if((i*m)%n==0)
        break;
    printf("lcd=%d\n",i*m)*/
//第九题：分数四则运算
    /*int a,b,c,d,r,t;
    char op;
    printf("please enter the two fenzi:");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("please enter the two fenmu:");
    scanf("%d%d",&c,&d);
    fflush(stdin);
    printf("please enter the op:");
    scanf("%c",&op);
    switch(op){
case '*':
    r=a*b;
    t=c*d;
    break;
case '-':
    r=a*d-b*c;
    t=c*d;
    break;
case '+':
    r=a*d+b*c;
    t=c*d;
    break;
case '/':
    r=a*d;
    t=c*b;
    break;
    }
    printf("two fenshixiang %c de jieguo shi %d/%d",op,r,t);*/
//第十题：求一行英文中倒数第二个单词的字符个数
    /*int len1,len2,inWord;
    char c;

    inWord=0;
    len1=len2=0;
     do{
    c=getchar();
    if(c>='a' && c<='z' || c>='A' && c<='Z')
        {
      if(!inWord){
	         inWord=1;
	         len1=len2;
             len2=0;
      }
      len2++;
    }
    else{
      if(inWord){
	    inWord=0;
      }
    }
  }while(c!='\n');
  printf("%d\n",len1);*/
//上机试题1：
    /*int x,y,z;
    printf("please enter three number:");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y==z)
        printf("x+y=z");
    else
        printf("x+y!=z");*/
//上机试题2：
        /*bool isLeapYear(int year)//判断是否闰年
    int
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int getMonthDays(int year, int month)//获得该月天数
{
    int days = 0;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        if (isLeapYear(year))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    }
    return days;
}

void showMonth(int days, int startday)//输出月历
{
    const char weeks[][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    for (int i = 0; i < 6; i++)
    {
        printf("%s ", weeks[i]);
    }
    printf("%s\n", weeks[6]);

    for (int i = 1; i <= days; i++)
    {
        if (i == 1)
        {
            for (int j = 0; j < startday; j++)
            {
                printf("    ");
            }
            printf("%3d ", 1);
        }
        else
        {
            printf("%3d ", i);
        }
        if ((i + startday) % 7 == 0)
        {
            putchar('\n');
        }
    }
    putchar('\n');
}
}    */
//自测题2：
    int dec,oct,mul,x;
    printf("\nenter a number；");
    scanf("%d",&dec);
    printf("\nthe decimal is %d",dec);
    oct=0;
    mul=1;
    x=dec;
    while(dec%8!=0)
    {
        oct=dec%8*mul+oct;
        dec/=8;
        mul=mul*10;
    }
    printf("\n the octavo is %d",oct);
    printf("\n%o",x);}
//输入四个数求最大和最小
    /*int i,x,max,min;
    printf("Enter x:");
    scanf("%d",&x);
    max=x;min=x;
    for (i=1;i<4;i++){
	printf("Enter x:");
	scanf("%d",&x);
	if (x>max) max=x;
	if (x<min) min=x;
    }
    printf("max=%d min=%d\n",max,min);*/
//输出数列前20项
    /*int i;
    int s[50]={0};
    s[0]=0;s[1]=1;
    for(i=2;i<50;i++)
    s[i]=s[i-2]+s[i-1];
    for(i=0;i<20;i++)
        printf(" %d",s[i]);*/

