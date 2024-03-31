#include<stdio.h>
void main()
    {
     int n ,a[50],i,*ptr;
     printf("\n enter the size of array :");
     scanf("%d",&n);
     printf("\n enter the array element :");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     ptr = &a[n-1];
     printf("\n Array in reverse order :");
     printf("\n");
     for(i=0;i<n;i++)
     {
        printf("%d \t ",*ptr--);
     }
    }
