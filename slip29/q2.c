#include<stdio.h>
#include<string.h>
void main()
{
 char str1[50],str2[50];
 int choice;
 printf("\n String Operations Menu:");
 printf(" 1: Read Strings\t 2: Display Strings\t 3: Copy Strings\t 4: Compare
Strings\t 5: Concentrate Strings");
 printf("\n Enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("\n Enter the first string:");
 scanf("%s",str1);
 printf("\n Enter the second string:");
 scanf("%s",str2);
 break;
 case 2:printf("\n Enter the first string:");
 scanf("%s",str1);
 printf("\n Enter the second string:");
 scanf("%s",str2);
 printf("\n String 1: %s",str1);
 printf("\n String 2: %s",str2);
 break;
 case 3:printf("\n Enter the string:");
 scanf("%s",str1);
 strcpy(str2,str1);
 printf("\n Copied string: %s",str2);
 break;
 case 4:printf("\n Enter the first string:");
 scanf("%s",str1);
 printf("\n Enter the second string:");
 scanf("%s",str2);
 if(strcmp(str1,str2)==0)
 {
 printf("\n Strings are equal");
 }
 else
 {
 printf("\n Strings are not equal");
 }
 break;
 case 5:printf("\n Enter the first string:");
 scanf("%s",str1);
 printf("\n Enter the second string:");
 scanf("%s",str2);
 strcat(str1,str2);
 printf("\n Concentrated string: %s",str1);
 break;
 default:printf("\n Invalid choice");
 break;
 }
