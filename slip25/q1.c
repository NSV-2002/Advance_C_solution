#include<stdio.h>
#define MIN(x,y) (x<y ? x:y)
void main()
{
int a,b;
printf("enter two numbers \n");
scanf("%d%d",&a,&b);
printf("minumum number from %d and %d is = %d",a,b,MIN(a,b));
}