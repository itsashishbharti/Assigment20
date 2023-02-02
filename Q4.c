#include<stdio.h>
int main()
{
    int *ptr=(int*)malloc(4);
    if(ptr=='\0')
    {
        printf("\n Memorry Allocation Failed");
        return 0;
    }
}