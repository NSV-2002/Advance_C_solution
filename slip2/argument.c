#include<stdio.h>
int main(int argc, char * argv[])
{
    int i;
    printf("\n number of argument :%d",argc);
    for(i=0;i<argc+1;i++)
    {
        printf("\n ARGUMENTS %d is :%s",i,argv[i]);
    }
    return 0;
}