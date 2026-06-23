#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
};

int main()
{
    struct Student s = {101, "Priya"};
    struct Student *ptr;

    ptr = &s;

    printf("Roll No : %d\n", ptr->rollno);
    printf("Name    : %s\n", ptr->name);

    return 0;
}
