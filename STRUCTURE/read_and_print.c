#include <stdio.h>
typedef struct employee
{
    char name[50];
    int id;
    float salary;
}employee_detail;
void print_salary(employee_detail *);
int main()
{
    employee_detail e1;
    printf("Name:");
    scanf("%s",e1.name);
    printf("ID:");
    scanf("%d",&e1.id);
    printf("salary:");
    scanf("%f",&e1.salary);
    print_salary(&e1);
}
void print_salary(employee_detail *eptr)
{
    printf("NAME:%s\n",eptr->name);
    printf("ID:%d\n",eptr->id);
    printf("SALARY:%f\n",eptr->salary);
}
