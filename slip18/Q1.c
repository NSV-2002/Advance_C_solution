#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
 int num,i,fact=1;
 if(argc!=2)
 { 
 printf("\n Invalid number of arguments");
 return 0;
 }
 num=atoi(argv[1]);
 for(i=1;i<=num;i++)
 {
 fact=fact*i;
 }
 printf("\n Factorial of %d is %d",num,fact);
 return 0;
}