#include<stdio.h>
#include<string.h>
int main()
{
int n,i,len,longlen=0;
char str[50],lstr[50];
printf("enter number of strings = \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter %d string",i+1);
scanf("%s",str);
len=strlen(str);
printf("string %d: %s",i+1,str);
printf("\t size= %d \n",len);
if(len>longlen)
{
longlen=len;
strcpy(lstr,str);
}
}
printf("\n longest string %s \n",lstr);
printf("length of longest string : %d \n",longlen);
return 0;
}