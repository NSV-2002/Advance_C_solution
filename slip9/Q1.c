#include<stdio.h>
#define N(x,y) ((x>y) ? x:y)
#define MAX(x,y,z) ((z>(N(x,y))) ? z : N(x,y))
void main()
{
	int a,b,c;
	printf("enter three numbers to find Maximum among them");
	scanf("%d%d%d",&a,&b,&c);
        MAX(a,b,c);
	printf("maximum number is = %d",MAX(a,b,c));
}