#include <stdio.h>
struct Student
{
    char name[45];
    int marks;
    int roll_num;
};
int main()
{
    int n;
    printf("enter the number of students");
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++)
    {

        printf("enter the name of the student : ");
        scanf("%s", &s[i].name);
        printf("enter the marks of student:  ");
        scanf("%d", &s[i].marks);
        printf("enter the roll number: ");
        scanf("%d", &s[i].roll_num);
    }
    int highest_marks = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > highest_marks)
        {
            highest_marks = s[i].marks;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (highest_marks == s[i].marks)
        {
            printf("highest marks of : %s ", s[i].name);
            break;
        }
    }
}