#include<stdio.h>
int main()
{
	FILE *fp;
	char filename[10];
	char c;
	printf("enter the file name to open");
	scanf("%s",filename);
	fp=fopen(filename,"r");
	if(fp == NULL)
	{
		printf("\n error opening file");
		return 1;
	}
	printf("content of file %s",filename);
	while( (c=getc(fp)) != EOF )
	{
		putchar(c);
	}
	fclose(fp);
	return 0;
}