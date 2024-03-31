#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i , n ,*ptr,sum=0;
    printf("\n enter the side of array :");
    scanf("%d",&n);
    ptr =(int *)malloc (n * sizeof(int));
    printf("\n enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        sum = sum + *ptr+i;
    }
    printf("\n sum of array elements =%d",sum);
}