#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n,*arr,sum=0;
 float avg;
 printf("\n Enter the number of elements:");
 scanf("%d",&n);
 arr=(int *)calloc(n,sizeof(int));
 printf("\n Enter the %d elements:",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",(arr+i));
 }
 for(i=0;i<n;i++)
 {
 sum=sum+*(arr+i);
 }
 avg=sum/n;
 printf("\n Sum=%d",sum);
 printf("\n Average=%f",avg);
}