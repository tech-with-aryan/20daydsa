#include<stdio.h>

struct student
{
    char name[50];
    int marks;
    int rollnum;
};
void main()
{
    struct student s;
    printf("enter the name of student");
    scanf("%s",&s.name);
    printf("enter student marks");
    scanf("%d", &s.marks);
    printf("enter student roll num");
    scanf("%d", &s.rollnum);
    printf("the name of the student is %s\n",s.name);
    printf("the marks of the student is %d\n",s.marks);
    printf("the roll num of the student is %d\n",s.rollnum);
}

