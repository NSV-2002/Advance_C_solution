#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int num1,num2,num3,min,max,sum;
float avg;
if(argc!=4)
{
	printf("\n invalid number of arguments");
}
num1=atoi(argv[1]);
num2=atoi(argv[2]);
num3=atoi(argv[3]);
if (num1<num2 && num1<num3)
{
	printf("min :%d\n",num1);
}else if (num2<num1 && num2<num3)
{
   printf("min :%d\n",num2);
}else{
	printf("min : %d\n",num3);
}
if (num1>num2 && num1>num3)
{
	printf("max :%d\n",num1);
}else if (num2>num1 && num2>num3)
{
   printf("max :%d\n",num2);
}else{
	printf("max : %d\n",num3);

}
printf("average :%.2f\n",((float)num1+num2+num3)/3);
}
