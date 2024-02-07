
#include <stdio.h>
typedef struct employee
{
    char name[50];
    int id;
    float salary;
}employee_detail;
void print_detail(employee_detail *);
int main()
{
    employee_detail e1={"GAYATHRI",21,789546};
    print_salary(&e1);
}
void print_detail(employee_detail *eptr)
{
    printf("NAME:%s\n",eptr->name);
    printf("ID:%d\n",eptr->id);
    printf("SALARY:%f\n",eptr->salary);
}
