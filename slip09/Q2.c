#include<stdio.h>
void main()
{

int i,j, a[3][3] ,transpose[3][3], *ptr;
printf("\n Enter the elements of 3x3 matix:");
for(i=0 ; i<3 ; i++)
{
  for ( j = 0; j < 3; j++)
  {
    scanf("%d",&a[i][j]);
  }
}
printf("\n original matrix :\n");

for ( i = 0; i < 3; i++)
{
  for ( j = 0; j < 3; j++)
  {
     printf("%d \t",a[i][j]);
  }
  printf("\n");
}
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        transpose[j][i]=a[i][j];
    }
}
ptr=&transpose[0][0];
printf("The transpose of array is :\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf("%d\t",*ptr++);
    }
    printf("\n");
}
}