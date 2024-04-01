#include<stdio.h>
#define S(x) (x*x)
#define CUBE(x) (x*x*x)
void main()
{
 int num;
 printf("\n Enter the number:");
 scanf("%d",&num);
 printf("\n Cube of %d is %d",num,CUBE(num));
}