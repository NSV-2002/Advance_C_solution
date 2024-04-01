#include<stdio.h>
#define CALC(r) ((2*22*r)/7)
void main()
{
 float radius;
 printf("\n Enter the radius of circle:");
 scanf("%f",&radius);
 printf("\n Circumference of circle is %f",CALC(radius));
}