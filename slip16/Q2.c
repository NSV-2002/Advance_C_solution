#include<stdio.h>
#include<string.h>
void copy(char *,char *,int);
void main()
{
 char str1[30],str2[30],str[30];
 int n;
 printf("\n Enter the first string:");
 gets(str1);
 printf("\n Enter the second string:");
 gets(str);
 printf("\n Enter the number of character to copy:");
 scanf("%d",&n);
 copy(str1,str2,n);
 printf("\n Copied String is:%s",strcat(str2,str));
}
void copy(char *str1,char *str2,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
 *(str2+i)=*(str1+i); 
 }
 *(str2+i)='\0';
}


