#include<stdio.h>
void main()
{
 int n,i;
 printf("\n Enter the size of array:");
 scanf("%d",&n);
 int data[n];
 printf("\n Enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",data+i);
 }
 printf("\n Entered elements are:");
 for(i=0;i<n;i++)
 {
 printf("%d\t",*(data+i));
 }
}


