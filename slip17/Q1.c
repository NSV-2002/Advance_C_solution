#include<stdio.h>
#include<string.h>
void main()
{ 
 char str[50];
 int i,vowels=0;
 printf("\n Enter the string:");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
 if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||
str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
 {
 vowels=vowels+1;
 }
 }
 printf("\n Number of vowels in a string is %d",vowels);
}