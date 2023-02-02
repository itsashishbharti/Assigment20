#include<stdio.h>
void swap();
int main()
{
    int x=5,y=10;
    printf("\nBefore Swaping Value of X=%d Value of Y=%d\n",x,y);
    swap(&x,&y);
    printf("\nBefore Swaping Value of X=%d Value of Y=%d\n",x,y);
    return 0;
}
void swap(int *p,int *q)
{
   int t;
   t=*p;
   *p=*q;
   *q=t;
   
}