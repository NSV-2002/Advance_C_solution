#include<stdio.h>
void main()
{
    int a,b,*ptr1,*ptr2,temp;
    printf("\n enter the first number :");
    scanf("%d",&a);
    printf("\n enter the second number :");
    scanf("%d",&b);
    printf("\n the value of first number :%d \n the value of second number is :%d",a,b);
    ptr1=&a;
    ptr2=&b;
    temp =*ptr1;
    *ptr1=*ptr2;
    *ptr2 = temp;
    printf("\n values after interchange \n first num:%d \n second num:%d",a,b);
}