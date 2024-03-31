#include<stdio.h>
int mult(int *a,int *b);
void main()
{
	int a,b,result;
	printf("enter first number\n ");
	scanf("%d",&a);
        printf("enter second number \n");
        scanf("%d",&b);
        result=mult(&a,&b);
        printf("multiplication= %d\n",result);
}
int mult(int *a,int *b)
{
	return((*a)*(*b));
}