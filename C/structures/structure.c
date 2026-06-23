#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct Student s = {101, "Priya", 95.5};

    printf("Roll No : %d\n", s.rollno);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);

    return 0;
}
