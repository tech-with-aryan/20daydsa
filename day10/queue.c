#include <stdio.h>

#define size 6

int queue[size];
int front = -1;
int rear = -1;

void enqueue()
{
    int d;

    if (rear == size - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &d);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = d;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d element deleted\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue Empty\n");
    }
    else
    {
        printf("Queue: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int c;

    while (1)
    {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        scanf("%d", &c);

        switch (c)
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
            return 0;

        default:
            printf("Wrong Input\n");
        }
    }
}