#include<stdio.h>
void main()
{
	int a ,b,*ptr1,*ptr2,temp;
    printf("\nEnter the value of two numbers:");
    scanf("%d%d",&a,&b);
    printf("\na=%d and b=%d",a,b);
ptr1=&a;
ptr2 =&b;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("\nAfter interchanging :\n a=%d and b=%d",a,b);
}