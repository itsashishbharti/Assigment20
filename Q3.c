#include<stdio.h>
void sort();
int main()
{
    int a[5]={1,6,82,44,33};

    printf("\n Before Sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
   printf("\n");
    sort(&a,5);
   printf("\n After Sorting\n");
 for(int i=0;i<5;i++)
 {
     printf("%d ",a[i]);
 }
 return 0;
}
void sort(int *p,int size)
{
    int temp;
     for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        if(*(p+i)>*(p+j))
        {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
    }
}