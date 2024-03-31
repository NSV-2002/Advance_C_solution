#include<stdio.h>
#include<string.h>
int length(char *);
void reverse(char *);
void main()
{
    char str[50];
    printf("\nEnter the string :");
    gets(str);
    printf("\n lenght of the string is :%d",length(str));
    reverse(str);
    printf("revrese of string is :%s",str);
}
int length(char *str)
{
int len=0;
while(*str!='\0')
{
    len++;
    *str++;
}
return len;
}
void reverse(char *ptr)
{
    char *start = ptr;
    char *end = ptr + strlen(ptr) - 1;
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp; 
        start++;
        end--;
    }
}