#include<stdio.h>
#include<string.h>
void main()
{
 char s1[50],s2[50];
 printf("\n Enter the 1st string:");
 gets(s1);
 printf("\n Enter the 2nd string:");
 gets(s2);
 if(strcmp(s1,s2)==0)
 {
 printf("\n Strings are equal");
 }
 else
 {
 printf("\n Strings are not equal");
 }
 strcat(s1,s2);
 printf("\n Combined strings are:%s",s1);
}