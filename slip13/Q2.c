#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[] )
{
        int n,max,min,*arr,i;  	
	printf("enter the number of integers \n");
	scanf("%d",&n);
	arr=(int *) malloc (n * sizeof(int));
	printf("enter %d integers \n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
		      max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
        }
	printf("maximum number is = %d \nminimum number is = %d\n",max,min);
}