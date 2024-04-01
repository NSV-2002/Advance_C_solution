#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n,*ptr,sum=0;
 float avg=0;
 printf("\n Enter the size of array:");
 scanf("%d",&n);
 ptr=(int *)malloc(n *sizeof(n));
 printf("\n Enter the %d elements of array:",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",(ptr+i));
 }
 for(i=0;i<n;i++)
 {
 sum=sum+*(ptr+i);
 }
 avg=sum/n;
 printf("\n Sum =%d",sum);
 printf("\n Average=%f",avg);
}
