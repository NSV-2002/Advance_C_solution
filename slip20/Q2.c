#include<stdio.h>
#include<string.h>
void occur(char *);
void main()
{ 
 char str[50];
 printf("\n Enter the string:");
 gets(str);
 occur(str);
}
void occur(char *str)
{
 char ch,*ptr;
 int i;
 ptr=str;
 printf("\n Enter the character:");
 scanf("%c",&ch);
 printf("\n First occurrence of %c is ",ch);
 for(i=0;str[i]!='\0';i++)
 {
 if(ch==*(ptr+i))
 {
 printf("%d",i+1);
 }
 }
}
