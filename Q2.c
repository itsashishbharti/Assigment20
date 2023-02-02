#include<stdio.h>
#include<string.h>
void swap();
int main()
{
    char *n="Ashish";
    char *n1="Amit";

    printf("\nBefore Swaping Value of X=%s Value of Y=%s\n",n,n1);
    swap(&n,&n1);
    printf("\nBefore Swaping Value of X=%s Value of Y=%s\n",n,n1);
    return 0;
}
void swap(char **p,char **a)
{
    char *t;
    t=*p;
    *p=*a;
    *a=t;
}