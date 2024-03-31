#include<stdio.h>
#define max(x,y) ((x>y)?x:y)
void main()
{
    int num1,num2;
    printf("\nEnter the first number :");
    scanf("%d",&num1);
    printf("\nEnter the second number :");
    scanf("%d",&num2);
    printf("\n maxium number is %d",max(num1,num2));
    
}