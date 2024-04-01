#include<stdio.h>
#include<string.h>
struct student 
{
 char name[20];
 char subject[20];
 float percentage;
};
union details
{
 struct student s1,s2;
};
int main()
{
union details set1,set2;
printf("\n Enter the name of 1st student:");
scanf("%s",set1.s1.name);
printf("\n Enter the subject of 1st student:");
scanf("%s",set1.s1.subject);
printf("\n Enter the percentage of 1st student:");
scanf("%f",&set1.s1.percentage);
printf("\n Enter the name of 2nd student:");
scanf("%s",set2.s2.name);
printf("\n Enter the subject of 2nd student:");
scanf("%s",set2.s2.subject);
printf("\n Enter the percentage of 2nd student:");
scanf("%f",&set2.s2.percentage);
printf("\n 1st student information:");
printf("\n Student Name:%s",set1.s1.name);
printf("\n Subject:%s",set1.s1.subject);
printf("\n Percentage:%f",set1.s1.percentage);
printf("\n 2nd student information:");
printf("\n Student Name:%s",set2.s2.name);
printf("\n Subject:%s",set2.s2.subject);
printf("\n Percentage:%f",set2.s2.percentage);
return 0;
}