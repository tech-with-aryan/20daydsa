#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

// Enqueue
void enqueue()
{
    struct node *current;
    int d;

    current = (struct node *)malloc(sizeof(struct node));

    if (current == NULL)
    {
        printf("Queue is Overflow\n");
        return;
    }

    printf("Enter a number: ");
    scanf("%d", &d);

    current->data = d;
    current->next = NULL;

    if (front == NULL)
    {
        front = rear = current;
    }
    else
    {
        rear->next = current;
        rear = current;
    }
}

// Dequeue
void dequeue()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue is Underflow\n");
        return;
    }

    temp = front;
    printf("Deleted Element = %d\n", front->data);

    front = front->next;
    free(temp);

    if (front == NULL)
    {
        rear = NULL;
    }
}

// Display
void display()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }

    temp = front;

    printf("Queue Elements: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== SIMPLE QUEUE =====");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}