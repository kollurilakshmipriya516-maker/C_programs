#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
};

int main()
{
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter Roll No and Name: ");
        scanf("%d%s",
              &s[i].rollno,
              s[i].name);
    }

    printf("\nStudent Details\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d %s\n",
               s[i].rollno,
               s[i].name);
    }

    return 0;
}
