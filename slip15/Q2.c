#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,j,n,temp,*a;
 printf("\n Enter the number of integers:");
 scanf("%d",&n);
 a=(int *)malloc(n *sizeof(int));
 printf("\n Enter the %d integers:",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",(a+i));
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(*(a+i)>*(a+j))
 {
 temp=*(a+i);
 *(a+i)=*(a+j);
 *(a+j)=temp;
 }
 }
 }
 printf("\n Numbers in ascending order are:");
 printf("\n");
 for(i=0;i<n;i++)
 {
 printf("%d\t",*(a+i));
 }
}