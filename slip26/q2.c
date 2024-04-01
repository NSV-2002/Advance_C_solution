#include<stdio.h>
#include<string.h>
void main()
{
 int i,vowels=0;
 char str[100];
 printf("\n Enter the string:");
 gets(str);
 printf("\n String: ");
 for(i=0;str[i]!='\0';i++)
 {
 if(str[i]=='^')
 {
 break;
 }
 printf("%c",str[i]);
 }
 for(i=0;str[i]!='\0';i++)
 {
 if(str[i]=='^')
 {
 break;
 }
 if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||
str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
 {
 vowels=vowels+1;
 }
 }
 printf("\n Number of vowels is string is %d",vowels);
}