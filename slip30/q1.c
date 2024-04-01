#include<stdio.h>
#include<string.h>
void main()
{
 char str[50];
 int vowels=0,i;
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
 printf("\n %d vowels are present in the string",vowels);
}
