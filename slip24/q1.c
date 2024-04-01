#include<stdio.h>
#define OE(x) (x%2==0 ? printf("even"):printf("odd"))
void main()
{
int a;
printf("\n enter number = ");
scanf("%d",&a);
OE(a);
}