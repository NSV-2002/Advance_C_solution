#include<stdio.h>
struct student
{
    int rollno;
    char name[30];
    float marks;
};
void main()
{
    struct student s1;
    printf("\n Enter the student rollno :");
    scanf("%d",&s1.rollno);
    printf("\n Enter student name :");
    scanf(" %s",&s1.name);
    printf("\n Enter student marks :");
    scanf(" %f",&s1.marks);
    printf("\n Student information :");
    printf("Student rollno :%d\n",s1.rollno);
    printf("Student name :%s\n",s1.name);
    printf("Student marks :%.2f\n",s1.marks);
}
