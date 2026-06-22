#include <stdio.h>

#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

void insertFront(int data)
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (front == 0)
        front = SIZE - 1;
    else
        front--;

    deque[front] = data;
}

void insertRear(int data)
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (rear == SIZE - 1)
        rear = 0;
    else
        rear++;

    deque[rear] = data;
}

void deleteFront()
{
    if (front == -1)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted element = %d\n", deque[front]);

    if (front == rear)
        front = rear = -1;
    else if (front == SIZE - 1)
        front = 0;
    else
        front++;
}

void deleteRear()
{
    if (front == -1)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted element = %d\n", deque[rear]);

    if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = SIZE - 1;
    else
        rear--;
}

void display()
{
    if (front == -1)
    {
        printf("Deque Empty\n");
        return;
    }

    int i = front;

    printf("Deque: ");

    while (1)
    {
        printf("%d ", deque[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main()
{
    int choice, data;

    while (1)
    {
        printf("\n1.Insert Front");
        printf("\n2.Insert Rear");
        printf("\n3.Delete Front");
        printf("\n4.Delete Rear");
        printf("\n5.Display");
        printf("\n6.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &data);
            insertFront(data);
            break;

        case 2:
            printf("Enter Data: ");
            scanf("%d", &data);
            insertRear(data);
            break;

        case 3:
            deleteFront();
            break;

        case 4:
            deleteRear();
            break;

        case 5:
            display();
            break;

        case 6:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}
