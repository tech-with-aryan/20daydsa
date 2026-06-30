#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push()
{
    struct node *current=(struct node *)malloc(sizeof(struct node));
if(current==NULL)
printf("stack overflow");
int d;
printf("enter the no:");
scanf("%d",&d);
current->data=d;
current->next=top;
top=current;
}
void pop()
{
    if(top==NULL)
    {
        printf("underflow");
    }
    struct node *temp;
    temp=top;
    top=top->next;
    free(temp);
}
void display()
{
    if(top==NULL)
    {
        printf("underflow");
    }
    struct node *temp=top;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int choice;

    while (1)
    {
        printf("\n----- STACK USING LINKED LIST -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Program Ended.\n");
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}