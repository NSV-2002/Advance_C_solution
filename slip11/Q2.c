#include<stdio.h>
#include<string.h>
int palidrom(char *);
void main()
{
	char str[30];
	int result;
	printf("enter string: ");
	scanf("%s",str);
	result=palidrom(str);
	if(result==1)
	{
		printf("\nstring is palidrom.\n");
	}
	else
	{
		printf("string is not palidrom\n");
        }
}
int palidrom(char *str)
{
	int i,n;
	char *ptr;
	ptr=str;
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
		if(*ptr==str[n-i-1])
		{
			return 1;
		}
		else 
		{
			return 0;
		}

	}
}