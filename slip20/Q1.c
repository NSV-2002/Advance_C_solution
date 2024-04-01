#include<stdio.h>
#define SUM(x,y,z) (x+y+z)
void main()
{
 int a,b,c;
 printf("\n Enter the three numbers:");
 scanf("%d %d %d",&a,&b,&c);
 printf("\n Sum of given three numbers is %d",SUM(a,b,c));
}
