#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
    int i;
    for ( i = 1; i < argc; i++)
    {
        printf("lenght of string %d:%d\n",i,strlen(argv[i]));
    }
    
}