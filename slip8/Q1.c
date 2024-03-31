#include<stdio.h>
#define N(x) ((x>0) ? printf("positive"):printf("negative"))
void main()
{
	int a;
	printf("\nenter number to find positive or negative :");
	scanf("%d",&a);
	printf("given number is :");
	N(a);
}