#include <stdio.h>
#include <stdlib.h>
void main()
{
int *ptr1;
char *ptr2;
float *ptr3;
ptr1 = (int*)malloc(1*sizeof(int));
ptr2 = (char*)malloc(1*sizeof(char)*1);
ptr3 = (float*)malloc(1*sizeof(float));
printf("\nEnter the value for integer pointer : ");
scanf("%d",ptr1);
printf("\nEnter the value for char pointer : ");
scanf(" %c",ptr2);
printf("\nEnter the value for float pointer : ");
scanf("%f",ptr3);
printf("\nThe value stored in integer pointer is : %d",*ptr1);
printf("\nThe value stored in char pointer is : %c",*ptr2);
printf("\nThe value stored in float pointer is : %f",*ptr3);
}