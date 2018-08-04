#include <iostream>
#include <stdlib.h>

#include <stdio.h>
using namespace std;

int main()
{
    int a=10;
    switch(a+1)
    {
    case 10:
        {a++;
        printf("pp%d",a);}
    case 11:
        {++a;
        printf("xxx%d",a);
        break;}
        default:
            {a=a+1;
        printf("kk%d",a);}
    }
}
