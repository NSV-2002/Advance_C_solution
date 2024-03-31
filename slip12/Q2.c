#include<stdio.h>
struct Employee
{
    int emp_id;
    char emp_name[50];
    char designation[50];
};
void displayEmployee(struct Employee *e)
{
    printf("\n Employee id :%d",e->emp_id);
    printf(" \n Employee name :%s",e->emp_name);
    printf("\n Employee designation :%s",e->designation);
}
int main()
{
    struct Employee empl;
    printf("\n enter employee id:");
    scanf("%d",&empl.emp_id);
    printf("\n enter employee name:");
    scanf("%s",&empl.emp_name);
    printf("\n enter employee designation:");
    scanf("%s",&empl.designation);
    displayEmployee(&empl);
    return 0;

}
