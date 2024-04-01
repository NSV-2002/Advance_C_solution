#include<stdio.h>
#include<string.h>
void main()
{
char str[100][100],temp[100];
int n,i,j;
printf("enter number of strings: \n");
scanf("%d",&n);
printf("\n enter %d string: ",n);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(str[j],str[i])>0)
{
strcpy(temp,str[j]);
strcpy(str[j],str[i]);
strcpy(str[i],temp);
}
}
}
printf("\n string after sorting:");
printf("\n");
for(i=0;i<n;i++)
{
printf("%s\n",str[i]);
}
}