#include<stdio.h>
#include<string.h>
void main()
{
 char str[50],*ptr;
 int chr=0,space=0;
 printf("\n Enter the string:");
 gets(str);
 ptr=str;
 while(*ptr!='\0')
 {
 if(*ptr==' ')
 {
 space=space+1;
 }
 else
 {
 chr=chr+1;
 }
 *ptr++;
 }
 printf("\n Number of characters in string is %d",chr);
 printf("\n Number of white space in string is %d",space);
}
