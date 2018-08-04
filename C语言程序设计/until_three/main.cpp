#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
//解一元二次方程
   /*int a,b,c;
   printf("please enter the number:");
   scanf("%d%d%d",&a,&b,&c);
   if((b*b-4*a*c)<0)
    printf("No solution\n");
   else if((b*b-4*a*c)==0)
    printf("the solution is %lf",-b/(2.0*a));
   else
    printf("the solution is %lf and %lf",(-b+sqrt(b*b-4*a*c))/(2.0*a),(-b-sqrt(b*b-4*a*c))/(2.0*a));*/
//检查一个数是否为素数
    /*int x,i;
    printf("please a number:");
    scanf("%d",&x);
    for(i=2;i<x;i++)
        if(x%i==0)
        break;
    if(i==x)
        printf("%d is prim\n",x);
        else
    printf("%d isn't prim\n",x);*/
//百钱买百鸡问题
    /*int x,y,z;
    for(x=0;x<=100/5;x++)
        for(y=0;y<=100/3;y++)
    for(z=0;z<=100;z++)
        if(((x+y+z)==100)&&((15*x+9*y+z)==300))
        printf("x=%d,y=%d,z=%d",x,y,z);*/
//等比数列求和
    /*long item,ratio,sum,i;
    printf("please enter the first item and ratio:");
    scanf("%ld%ld",&item,&ratio);
    sum=item;
    for(i=1;i<10;i++){
        item*=ratio;
        sum=sum+item;
    }
    printf("sum of 10 items is %ld\n",sum);*/
//求圆周率
    /*int i=1,sign=1;
    double PI=0.0;
    double item;
    do{
        item=sign*4.0/(2*i-1);
        PI+=item;
        i++;
        sign=-sign;
    }while(fabs(item)>1e-4);
    printf("PI=%lf\n",PI);*/
//按位分解整数
    /*long x,y,n;
    printf("please enter a number:");
    scanf("%ld",&x);
    y=x;
    n=1;
    while(y>10){
        n*=10;
        y=y/10;
    }
    do{
        printf("%ld\t",x/n);
        x=x%n;
        n=n/10;
    }while(n>=1);*/
//习题1:输出100以内的所有素数，每行仅输出5个素数
    /*int j,i,n=0,flag;
    for(i=2;i<=100;i++){
            flag=1;
        for(j=2;j<i;j++)
            if(i%j==0)
               {
                flag=0;
                break;
                }
            if(flag)
            {
                printf("%d ",i);
                n++;
                if(n%5==0)
                printf("\n");
            }



    }*/
//习题二：输出一个数的所有因子
    /*int x,i;
    printf("enter a number:");
    scanf("%d",&x);
    printf("%d de yinzi you :",x);
    for(i=1;i<=x;i++)
        if(x%i==0)
        printf("%d\t",i);*/
//第三题：韩信点兵
    /*int n=10;
     while(1)
     {
         if(n%5==1&&n%6==5&&n%7==4&&n%11==10)
            break;
         n++;
     }
    printf("num=%d",n);*/
//第四题：水仙花数量
    /*int n,m,x,l,i;
    printf("suo you shui xian hua:");
    for(i=100;i<999;i++)
        {x=i/100; //百位
        m=i%100;
        n=m/10;//十位
        l=m%10;//个位
        if(x*x*x+n*n*n+l*l*l==i)
            printf("%d\t",i);
        }*/
//第五题：输出1*2*3+4*5*6....的值
    /*long sum=0;
    int i;
    for(i=1;i<=99;i+=2)
        sum=sum+i*(i+1)*(i+2);
    printf("1*2*3+3*4*5*6+6*.....=%ld",sum);*/
//第六题：输出a+aa+aaa+aaaa....
     /*int a,n;
     long item=0;
     long sum=0;
     printf("please enter a and n:");
     scanf("%d%d",&a,&n);
     item=a;
     for(int i=1;i<=n;i++)
     {
         sum=sum+item;
         item=item*10+a;
     }
     printf("a+aa+aaa+...=%ld",sum);*/

     /*long t,s=0;
   int i,a,n;

   printf("Please Enter two integers a n: ");
   scanf("%d%d",&a,&n);
   t=a;
   for(i=1;i<=n;i++){
      s=s+t;
      t=t*10+a;
   }

   printf("a+aa+aaa+...=%ld",s);*/
//第七题：猴子吃桃
    /*int x,i;
    x=1;
    for(i=1;i<=9;i++)
	x=(x+1)*2;
    printf("\nx=%d",x);*/
//上机题1；
    /*int i,j,k,n=0;
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
        for(k=0;k<=6;k++)
    if((i+j+k)==8){
            n++;
        printf("\nred has %d,white has %d,black has %d",i,j,k);
    }
    printf("\n一共有%d种组合",n);*/
//上机题2：
    /*int i=1,sign=1;
    double item=1,sum=0;
    while(fabs(item)>=1e-4)
    {
        item=sign*1.0/i;
        i++;
        sign=-sign;
        sum+=item;
    }
    printf("1-1/2+1/3.....%lf=%lf",item,sum);*/
        /*int sign=-1;
    long j=1;
    double item,sum=1.0;

    do {
	 j++;
	 item=sign*1.0/j;
	 sum+=item;
	 sign=-sign;

    } while(fabs(item)>=1e-4);

    printf("\n1-1/2+1/3-...= %lf",sum);*/
//编程题1：求100的所有质因子
    /*int i,j;
    for(i=2;i<=100;i++)
    {
        if(100%i==0)
        {
            for(j=2;j<i;j++)
             if(i%j==0)
                break;
              if(i==j)
                printf("\n%d",i);
        }


    }*/

/*int x=100,i,k;

  for(i=2;i<x;i++){
     if (x%i==0){
	for(k=2;k<i;k++)
	   if(i%k==0) break;
	if(k==i)  printf("%3d",i);
     }
  }*/
//编程题2：
    /*float y=1,n=1,k=1;
    while(n>=1e-6)
    {
        n=1/(k*(k+1));
        k++;
        y+=n;
    }
    printf("%lf",y);*/
      /*double sum=0.0;
  long i=0,j;
  double item=1.0;

  while(fabs(item)>1e-6){
     sum=sum+item;
     i++;
     item=1.0/(i*(i+1));
  }
  printf("\nsum=%lf",sum);*/

}

