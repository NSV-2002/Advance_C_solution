#include<stdio.h>
void main()
{
    int i,j,a[3][3],*ptr;
    printf("\n Enter the elements of 3x3 matrix :");
    for(i=0;i<3;i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }     
    }
    ptr =&a[0][0];
    printf("\n matrix using pointer :");
    printf("\n");
    for ( i = 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
        printf("%d \t",*ptr++);
      }
      printf("\n");
    }
    
}