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

        printf("enter the name of the student");
        scanf("%s", &s[i].name);
        printf("enter the marks of student ");
        scanf("%d", &s[i].marks);
        printf("enter the roll number ");
        scanf("%d", &s[i].roll_num);
    }
    for (int i = 0; i < n; i++)
    {
        printf("name : %s \nmarks: %d\nroll number %d", s[i].name, s[i].marks, s[i].roll_num);
    }
}