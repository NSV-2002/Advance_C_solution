#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char str[50],*ptr;
	printf("\nenter string : ");
	scanf(" %s",str);
	printf("\norignal string= %s",str);
	ptr=str;
	for(i=0;str[i]!='\0';i++)
	{
		if(i%2==0)
		{
                       *ptr=*ptr-32;
		}
		ptr++;
        }
	printf("\nstring in ultenate uppercase character= %s",str);
}