#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20],len,len2;
    printf("\n Enter the 1st string :");
    gets(str1);
    len=strlen(str1);
    printf("length of string is %d",len);
    printf("\n enter the 2nd string :");
    gets(str2);
    len2=strlen(str2);
    printf(" length of string is %d",len2);
    if(strcmp (str1,str2)==0)
    {
        printf("\n string are equal ");
    }else
    {
        printf("\n string are not equal");
    }


}