#include<stdio.h>
#include<string.h>
void main()
{ 
 char str[50],*ptr;
 int i,n,result;
 printf("\n Enter the string:");
 gets(str);
 ptr=str;
 n=strlen(str);
 for(i=0;i<n/2;i++)
 {
 if(*ptr==str[n-i-1])
 {
 result=1;
 break;
 }
 else
 {
 result=0;
 }
 }
 if(result==1)
 {
 printf("\n String is palindrome");
 }
 else
 {
 printf("\n String is not palindrome");
 }
}
