#include<stdio.h>
#include<string.h>
void pointer(char *,int);
void main()
{
char str[50];
int n;
printf("\n enter the string:");
gets(str);
printf("\n enter the number of character to replace: ");
scanf("%d",&n);
pointer(str,n);
printf("after replacing %d character string is = %s ",n,str);
}
void pointer(char *str,int n)
{
char *ptr;
int len,i;
ptr=str;
len=strlen(ptr);
if(n>len)
{
printf("invalid number of character is greater than string size");
}

for(i=0;i<n;i++)
{
*(ptr+1) = '*' ;
}

}