#include<stdio.h>
#include<string.h>
int main()
{
 char str1[50],str2[50];
 int choice,len;
 printf("\n String Operations Menu:");
 printf("\n 1: Read two strings\t 2:Display Strings\t 3: Length\t 4: Copy\t
5:Exit");
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
 printf("\n String 1:%s",str1);
 printf("\n String 2:%s",str2);
 break;
 case 3:printf("\n Enter the first string:");
 scanf("%s",str1);
 printf("\n Enter the second string:");
 scanf("%s",str2);
 printf("\n Length of first string is %d",strlen(str1));
 printf("\n Length of second string is %d",strlen(str2));
 break;
 case 4:printf("\n Enter the string:");
 scanf("%s",str1);
 strcpy(str2,str1);
 printf("\n Copied String:%s",str2);
 break;
 case 5:printf("\n Exiting program...");
 return 0;
 default:printf("\n Invalid choice");
 break;
 }
 return 0;
}