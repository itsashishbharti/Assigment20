#include<stdio.h>
int main()
{
    char name[20]="Ashish";
    int count=0;
    char *q=name;
   for(int i=0;*(q+i)!='\0';i++,count++);
   printf("\nLength=%d",count);
   return 0;

}