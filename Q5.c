#include<stdio.h>
int main()
{
    int a,b,max,*p;
    a=25;
    b=10;
    p=&a;
    if(*p>b)
    {
        max=*p;
    }
    else{
        max=b;
    }
    printf("\n Max=%d",max);
    return 0;
}