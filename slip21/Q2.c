#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n,*ptr;
 printf("\n Enter the number of elements:");
 scanf("%d",&n);
 ptr=(int *)malloc(n *sizeof(int));
 printf("\n Enter the %d elements:",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",(ptr+i));
 }
 for(i=0;i<n;i++)
 {
 if(*ptr<*(ptr+i))
 {
 *ptr=*(ptr+i);
 }
 }
 printf("\n Maximum number=%d",*ptr);
 for(i=0;i<n;i++)
 {
 if(*ptr>*(ptr+i))
 {
 *ptr=*(ptr+i);
 }
 }
 printf("\n Minimum number=%d",*ptr);
}
