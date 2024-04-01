#include<stdio.h>
#include<string.h>
void compare(char *str,char *str1);
void main()
{
char str[50],str1[50];
printf("enter first string");
gets(str);
printf("enter second string");
gets(str1);
compare(str,str1);
}
void compare(char *str,char *str1)
{
char *ptr,*ptr1;
ptr=str;
ptr1=str1;
while(*ptr == *ptr1)
{
if(*ptr=='\0' || *ptr1=='\0')
{
break;
}
ptr++;
ptr1++;
}
if(*ptr == '\0' && *ptr1=='\0')
{
printf("\n both string are equal");
}
else
{
printf("\n string are not equal");
}
}