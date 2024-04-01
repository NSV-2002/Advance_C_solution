#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int num1,num2,num3,max;
if(argc!=4)
{
printf("\n invalid number of arguments");
}
num1=atoi(argv[1]);
num2=atoi(argv[2]);
num3=atoi(argv[3]);
max=num1;
if(num2>num3)
{
max=num2;
}
if(num3>max)
{
max=num3;
}
printf("\n maximum number is %d",max);
}
