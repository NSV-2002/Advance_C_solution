#include<stdio.h>
#include<string.h>
void main()
{
 char str[50];
 int i,count=0;
 printf("\n Enter the string:");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
 count=count+1;
 }
 printf("\n Length of the string is %d",count);
}