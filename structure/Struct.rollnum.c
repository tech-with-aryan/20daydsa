#include <stdio.h>
struct Student
{
    char name[45];
    int marks;
    int roll_num;
};
int main()
{
    int n, i, j;
    printf("enter the number of students : ");
    scanf("%d", &n);

    struct Student s[n];
    struct Student temp;

    for (int i = 0; i < n; i++)
    {

        printf("enter the name of the student : ");
        scanf("%s", &s[i].name);
        printf("enter the marks of student:  ");
        scanf("%d", &s[i].marks);
        printf("enter the roll number: ");
        scanf("%d", &s[i].roll_num);
    }

    //  bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (s[j].marks > s[j + 1].marks)
            {

                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("all students in descndindg order\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("\n%s", s[i].name);
        printf("\n%d", s[i].marks);
        printf("\n%d", s[i].roll_num);
    }
}