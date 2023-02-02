#include<stdio.h>
#include<string.h>
int main()
{
    char name[10]="Ashish";
    char *q=name;
    int n=strlen(name);
    for(int i=n;i>=0;i--)
    {
        printf("%c",*(q+i));
    }
    return 0;
}