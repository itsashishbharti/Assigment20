#include<stdio.h>
int main()
{
    char name[20]="AshishBharti";
    int vo=0,cons=0;
    char *q=name;
    for(int i=0;name[i]!='\0';i++)
    {
        if(*(q+i)=='a'||*(q+i)=='A'||*(q+i)=='e'||*(q+i)=='E'||*(q+i)=='i'||*(q+i)=='I'||*(q+i)=='O'||*(q+i)=='o'||*(q+i)=='u'||*(q+i)=='U')
        {
            vo++;
        }
        else
        {
            cons++;
        }
    }
    printf("\n Total Vowel In String=%d\nTotal Consonants=%d",vo,cons);
    return 0;
}