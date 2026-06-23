#include <stdio.h>

struct Employee
{
    int empid;
    char name[30];
    float salary;
};

int main()
{
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empid);

    printf("Enter Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details\n");
    printf("ID     : %d\n", emp.empid);
    printf("Name   : %s\n", emp.name);
    printf("Salary : %.2f\n", emp.salary);

    return 0;
}
