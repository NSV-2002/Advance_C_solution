#include<stdio.h>
#define SQE(x) (x*x)
void main()
{
	int a;
	printf("enter number to square = ");
	scanf("%d",&a);
	printf("square = %d",SQE(a));

}