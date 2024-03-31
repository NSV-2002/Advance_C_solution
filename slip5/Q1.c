#include<stdio.h>
#define EVEN(num)  ((num%2==0)?printf("even"):printf("odd"))
void main()
{
    int num ;
    printf("enter the number :");
    scanf("%d",&num);
    printf("the given number is :");
    EVEN(num);
}