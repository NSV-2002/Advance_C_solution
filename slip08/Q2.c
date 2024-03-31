#include<stdio.h>
void main()
{
	int n,i,t,a[20];
	printf("\nenter limit of array:");
	scanf("%d",&n);
	printf("\nenter array element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the number to find out from array:");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
	       if(t==a[i])
	       {
		       printf("\n%d is present in the array:",t);
		       break;
	       }
	       else
	       {
		       printf("\n%d is not present in the array: ",t);
	       }
	}
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		{
			printf(" \n a[%d]=%d",i,t);
		}
	}
	
}