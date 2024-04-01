#include<stdio.h>
struct teacher
{
int teacherid;
char name[30];
char qualification[20];
int salary; 
};
void main()
{
struct teacher t;
printf("\nenter teacher id: \n");
scanf("%d",&t.teacherid);
printf("enter teacher name: \n");
scanf("%s",t.name);
printf("enter qualification: \n");
scanf("%s",t.qualification);
printf("enter salary of teacher \n");
scanf("%d",&t.salary);
printf("displaying teachers information: \n");
printf("teacher id= %d \n",t.teacherid);
printf("teacher name = %s \n",t.name);
printf("teacher qualification= %s \n",t.qualification);
printf("teachers salary: %d \n",t.salary);
}