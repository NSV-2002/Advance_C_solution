#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,*arr,i,max,min;
 printf("\n Enter the number of integers:");
 scanf("%d",&n);
 arr=(int *)malloc(n*sizeof(int));
 printf("\n Enter the %d integers:",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 max=arr[0];
 min=arr[0];
 for(i=0;i<n;i++)
 {
 if(arr[i]>max)
 {
 max=arr[i];
 }
 if(arr[i]<min)
 {
 min=arr[i];
 }
 }
 printf("\n Maximum number is %d",max);
 printf("\n Minimum number is %d",min);
}