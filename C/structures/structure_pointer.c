#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void display(struct Employee *e)
{
    printf("\nEmployee Details\n");
    printf("ID     : %d\n", e->id);
    printf("Name   : %s\n", e->name);
    printf("Salary : %.2f\n", e->salary);
}

int main()
{
    struct Employee emp;

    printf("Enter ID: ");
    scanf("%d", &emp.id);

    printf("Enter Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    display(&emp);

    return 0;
}
