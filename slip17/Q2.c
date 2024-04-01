#include<stdio.h>
#include<string.h>
void main()
{
    int j,i=1,n;
    printf("\nEnter number of citys :");
    scanf("%d",&n);
    char city[n][100];
    for(i=1;i<=n;i++)
    {
        printf("Enter the name of city %d: ",i);
        scanf("%s",&city[i]);
    }
    printf("\n Name of cites :");
    for ( i = 0; i <=n; i++)
    {
        printf("%s\n",city[i]);
    }
    

}