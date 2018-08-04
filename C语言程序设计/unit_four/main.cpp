#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctype.h>
#include <string.h>
#define NUM 10
using namespace std;

int main()
{
//例题1：
    /*int vote[NUM]={0};
    int code,i,winner;
    printf("\nenter your selection<0 end>:\n");
    do{
        scanf("%d",&code);
        if(code<0||code>NUM)
            {printf("\nInvalid vote.");}
    else{
    if(code!=0)
        vote[code-1]=vote[code-1]+1;
    }
}while(code!=0);
printf("\n The amount of vote is:");
for(i=0;i<NUM;i++){
    printf("%4d",vote[i]);}
winner=0;
for(i=1;i<NUM;i++)
    {if(vote[i]>vote[winner])
     winner=i;}
     printf("\n The winner is:");
     for(i=winner;i<NUM;i++){
        if(vote[i]==vote[winner])
            printf("%3d",i+1);
     }*/
//例题2：
    /*int x=26;
    int lette[x]={0};
    char ch;
    int i;
    printf("\nplease enter a txt:");
    while((ch=getchar())!='\n')
    {
        if('A'<=ch&&ch<='Z')
            lette[ch-'A']=lette[ch-'A']+1;
        else if('a'<=ch&&ch<='z')
            lette[ch-'a']=lette[ch-'a']+1;
    }
    for(i=0;i<26;i++){
        printf("\n\'%c\':%d",'A'+i,lette[i]);
    }*/
//例题3：
    /*float score[13];
    float minvalue,maxvalue,sum;
    int i;
    printf("\npelsase enter 13 score:");
    for(i=0;i<13;i++)
        scanf("%f",&score[i]);
    minvalue=score[0];
    maxvalue=score[0];
    sum=score[0];
    for(i=1;i<13;i++){
        if(score[i]<minvalue)
            minvalue=score[i];
        if(score[i]>maxvalue)
            maxvalue=score[i];
        sum=sum+score[i];}
        sum=(sum-minvalue-maxvalue)/(13-2);
        printf("\nfinal score is %6.2f",sum);*/
//例题四：
    /*int score[35];
    int i;
    randomize();
    for(i=0;i<35;i++)
        score[i]=random(100);
    for(i=0;i<35;i++)
        printf("\nNo.%d:%d",i+1,score[i]);
    for(i=0;i<35;i++)
        if(score[i]<60)
        break;
    if(i<35)
        printf("\nNot all pass.");
    else
        printf("All pass.");*/
//例题五：
    /*int value[10]={12,23,30,45,48,50,67,82,91,103};
    int low,high,mid,key;
    printf("\n enter a key:");
    scanf("%d",&key);
    low=0;
    high=9;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(value[mid]==key)
            break;
        if(value[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    if(low<=high)
        printf("\n%d is find at %d.",key,mid);
    else
        printf("\n%d is not find.",key);*/
//例题六：
    /*int data[10];
    int i,j,min,temp;
    printf("enter 10 integers:");
    for(i=0;i<10;i++)
        scanf("%d",&data[i]);
    printf("\n10 integers are :");
    for(i=0;i<10;i++)
        printf("%5d",data[i]);
    for(i=0;i<9;i++)
    {
        min=i;
        for(j=i+1;j<10;j++)
            if(data[j]<data[min])
            min=j;
        if(min!=i)
        {
            temp=data[i];
            data[i]=data[min];
            data[min]=temp;
        }
    }
    printf("\nordering list is:\n");
    for(i=0;i<10;i++)
        printf("%5d",data[i]);*/
//例题七：
    /*char num1[20],num2[20];
    double d1,d2,sum;
    printf("\n enter the first number:");
    gets(num1);
    printf("\n enter the second number:");
    gets(num2);
    d1=atof(num1);
    d2=atof(num2);
    sum=d1+d2;
    printf("\n%s+%s=%.3lf",num1,num2,sum);*/
//例题八：
    /*char str[33];
    long value;
    printf("\nenter a long number:");
    scanf("%ld",&value);
    ltoa(value,str,16);
    printf("\nthe hexadecimal of %ld is %s",value,str);
    ltoa(value,str,8);
    printf("\nthe octademial of %ld is %s",value,str);
    ltoa(value,str,2);
    printf("\nthe binary of %ld is %s",value,str);*/
//例题九：
    /*int letter[26]={0};
    char str[80];
    int i;
    printf("enter a txt:");
    gets(str);
    strupr(str);//小写转大写
    for(i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
            letter[str[i]-'A']=letter[str[i]-'A']+1;
    }
    for(i=0;i<26;i++)
        printf("\n\'%c':%d",'A'+i,letter[i]);*/
//例题十：
    /*char password[20];
    printf("\nenter password:");
    gets(password);
    while(strcmp(password,"administrators")!=0)
    {
        printf("\n Invalid password\n\n");
        printf("enter password,again:");
        gets(password);
    }
    printf("OK");*/
//例题十一：
    /*char str1[80]="This is a";
    char str2[]="program.";
    char str3[]="Java";
    char str4[]="pascal";
    char str5[]="C";
    char str6[]="C++";
    int choice;
    printf("\n   ---MENU---\n");
    printf("\n   Java.........1");
    printf("\n   pascal.......2");
    printf("\n   C............3");
    printf("\n   C++..........4");
    printf("\n choice");
    scanf("%d",&choice);
    switch(choice){
case 1:
    strcat(str1,str3);
    strcat(str1,str2);
    break;
case 2:
    strcat(str1,str4);
    strcat(str1,str2);
    break;
case 3:
    strcat(str1,str5);
    strcat(str1,str2);
    break;
case 4:
    strcat(str1,str6);
    strcat(str1,str2);
    break;
default:
    strcpy(str1,"error");}
    printf("\n%s", str1);*/
//例题十二：
    /*int i;
    char text[100];
    gets(text);
    for(i=0;text[i]!='\0';i++)
        if(isalnum(text[i]))
            text[i]=text[i]+5;
        puts(text);
        for(i=0;text[i]!='\0';i++)
            if(isalnum(text[i]))
            text[i]=text[i]-5;
        puts(text);*/
//例题十三：
    /*int num=5;
    int m[num][num];
    int i,j;
    printf("enter %d rows %d cols datas for the maxtrix:\n",num,num);
    for(i=0;i<num;i++)
        for(j=0;j<num;j++)
        scanf("%d",&m[i][j]);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++)
        printf("%4d",m[i][j]);
    printf("\n");}
    for(i=0;i<num;i++)
        for(j=0;j<i;j++)
        if(m[i][j]!=m[j][i])
    {
        printf("\nthe matrix isn't symetrical.");
        return 0;
    }
    printf("\nthe matrix is symmertrical.");*/
//例题十四：随机函数不能用
    /*int ROWNUM1=6,COLNUM1=4,ROWNUM2=4,COLNUM2=5;
    int A[ROWNUM1][COLNUM1];
    int B[ROWNUM2][COLNUM2];
    int C[ROWNUM1][COLNUM2];
    int i,j,k;
    rand()*/
//例题十五：有问题
    /*int num=5;
    int magic[num][num]={0};
    int i,j,value;
    i=0;j=num/2;
    magic[i][j]=1;
    for(value=2;value<=num*num;value++){
        if(magic[(i-1+num)%num][(j+1)%num]==0){
            i=(i-1+num)%num;
            j=(j+1)%num;
        }
        else {
            i=(i+1)%num;
            }
        magic[i][j]=value;
    }
     printf("\nthe magic(%d*%d) is:\n",num,num);
     for(i=0;i<num;i++){
        for(j=0;j<num;j++)
            printf("%4d",magic[i][j]);
        printf("\n");
     }*/
//习题一：
    /*int num=20;
    int value[num];
    int i,temp;
    printf("\nenter %d integers:\n",num);
    for(i=0;i<num;i++)
    scanf("%d",&value[i]);
        for(i=0;i<num;i++)
            printf("%4d",value[i]);
            printf("\n");
        for(i=0;i<num/2;i++)
        {
            temp=value[i];
            value[i]=value[num-i-1];
            value[num-i-1]=temp;
        }
        for(i=0;i<num;i++)
            printf("%4d",value[i]);*/
//习题二：
    /*int num=20;
    int fib[num];
    int i;
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<num;i++)
        fib[i]=fib[i-2]+fib[i-1];
    for(i=0;i<num;i++)
    {
        if(i%10==0)
            printf("%\n");
        printf("%6d",fib[i]);
    }*/
//习题三：
    /*char str1[80],str2[80];
    int i,j;
    printf("\n enter a text line:\n");
    gets(str1);
    str2[0]=str1[0];
    for(i=1,j=1;str1[i]!='\0';i++)
    {
        if(str1[i]==' '&&str1[i-1]==' ')
            continue;
        str2[j++]=str1[i];
    }
    str2[j]='\0';
    puts(str2);*/
//习题四：
    /*int num=100;
    int i, data[num];

   randomize();
   for(i=0; i<num; i++) {
      data[i]= random(100);
      printf("%4d",data[i]);
   }
   for(i=0; i<num; i++) {
      if(data[i]%2!=0)
	  data[i]= -1*data[i];
   }
   printf("\n");
   for(i=0; i<num; i++)
	printf("%4d",data[i]);*/
//习题六：
    /*int num=5,M=12;
    int i, yue, month[num], count[M]={0};
   printf("Please Enter %d month:", num);
   for(i=0; i<num; i++){
	scanf("%d", &month[i]);
	if(month[i]<0 || month[i]>12) {
		printf("It is a error.Please again:");
		i--;
        continue;
	}
   }
   for(i=0; i<num; i++)
	count[month[i]-1] += 1;
   for(i=0; i<M; i++)
	printf("The %d : %d\n",i+1,count[i]);*/
//习题七：
    /*int i,j;
    int n=0;
    int max=0;
    char x[100];
    printf("\nplease enter a text:");
    gets(x);
    for(i=0;i<strlen(x);i++)
    {   if(x[i]!=' ')
         n++;
        if(x[i]==' '||x[i+1]=='\0')
        {
        if(n>max)
            max=n;
            n=0;}
    }
    printf("\n the most world's length is %d",max);*/
//习题八：
    /*char x[100];
    printf("\nplease enter a text:");
    gets(x);
    if((x[0]>'a'&&x[0]<'z')||(x[0]>'A'&&x[0]<'Z')||x[0]=='_')
    printf("yes");
    else
        printf("No");*/
//习题九：
    /*int a[6][6],i,j;
    for(i=0;i<6;i++)
      for(j=0;j<=i;j++)
        if(i==j)
    a[i][j]=1;
        else if(i-j==1)
        a[i][j]=a[j][i]=2;
         else if(i-j==2)
        a[i][j]=a[j][i]=3;
        else a[i][j]=a[j][i]=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++)
        printf("%4d",a[i][j]);
    printf("\n");}*/
//第十题：

    /*int s[3][4],b[3];
    float a[3],p;
    int i,j,k,t,sum;
    for(i=0;i<3;i++)
    for(j=0;j<4;j++){
    printf("enter student %d socre %d :",i+1,j+1);
    scanf("%d",&s[i][j]);
    }
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<4;j++)
            sum+=s[i][j];
        a[i]=1.0*sum/4;
        b[i]=i;
    }
    for(i=0;i<2;i++){
        k=i;
        for(j=i+1;j<3;j++)
            if(a[k]<a[j])
            k=j;
        if(k!=i)
        {
            p=a[i];
            a[i]=a[k];
            a[k]=p;
            t=b[i];
            b[i]=b[k];
            b[k]=t;
        }
    }
    for(i=0;i<3;i++)
        printf("student %d AVERAGE:%.2f\n",b[i]+1,a[i]);*/
//上机题2：
    /*int i,j,n=0,world=0;
    char s[100];
    printf("please a text:");
    gets(s);
    for(i=0;i<strlen(s);i++)
    if(s[i]==' ')
    world=0;
    else if(world==0)
    {world=1;
    n++;}
    return n;*/
//编程题1：
    /*int s[10]={0};
    int m=5,t,k;
    for(int i=0;i<10;i++){
        printf("s[%d]",i);
    scanf("%d",&s[i]);}
    for(int i=0;i<5;i++){
        k=i;
        for(int j=i+1;j<10;j++)
            if(s[k]>s[j])
            k=j;
        if(k!=i){
            t=s[i];
            s[i]=s[k];
            s[k]=t;
        }
    }
    for(int i=0;i<5;i++)
        printf("%5d",s[i]);*/
//编程题2：
/*char s[80],*p,date[80];
int k;
printf("enter a string:");
gets(s);
p=strtok(s,"/");
k=atoi(p);
switch(k)
{
    case 1: strcpy(date,"Jan,");break;
    case 2: strcpy(date,"Feb,");break;
    case 3: strcpy(date,"Mar,");break;
    case 4: strcpy(date,"Apr,");break;
    case 5: strcpy(date,"May,");break;
    case 6: strcpy(date,"Jun,");break;
    case 7: strcpy(date,"Jul,");break;
    case 8: strcpy(date,"Aug,");break;
    case 9: strcpy(date,"Sep,");break;
    case 10: strcpy(date,"Oct,");break;
    case 11: strcpy(date,"Nov,");break;
    case 12: strcpy(date,"Dec,");break;

}
p=strtok(NULL,"/");
strcat(date,p);
strcat(date,",");
p=strtok(NULL,"/");
strcat(date,p);
printf("%s",date);*/
}
