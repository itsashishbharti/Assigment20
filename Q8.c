#include<stdio.h>
int sum();
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Sum Of Array=%d",sum(&arr,10));
    return 0;
}
int sum(int *p,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+*(p+i);
    }
    return sum;
}