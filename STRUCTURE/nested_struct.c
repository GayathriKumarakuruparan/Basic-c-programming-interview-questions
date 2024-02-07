#include <stdio.h>
typedef struct employee
{
    char name[50];
    int id;
    struct dof
    {
        int date;
        int month;
        int year;
    }D1;
}employee_detail;
void print_salary(employee_detail *);
int main()
{
    employee_detail e1;
       printf("Name:");
    scanf("%s",e1.name);
    printf("ID:");
    scanf("%d",&e1.id);
    printf("DateOfBrith:");
    scanf("%d",&e1.D1.date);
    scanf("%d",&e1.D1.month);
    scanf("%d",&e1.D1.year);
    print_salary(&e1);
}
void print_salary(employee_detail *eptr)
{
    printf("NAME:%s\n",eptr->name);
    printf("ID:%d\n",eptr->id);
    printf("DateOfBrith: %d/%d/%d",eptr->D1.date,eptr->D1.month,eptr->D1.year);
    
}
