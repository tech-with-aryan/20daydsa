#include<stdio.h>
#define size 7
int Q[size];
int r=-1,f=-1;
void enqueue()
{
    if ((r+1)%size == f)
    printf("overflow");
    else
    {
        r=(r+1)%size;
        int d;
        scanf("%d",&d);
        Q[r]=d;
    }
    if (f==-1)
    f=0;
}
void dequeue()
{
    if (f==-1)
    printf("underflow");
    else
    {
        if (f==r)
        f=r=-1;
        else
        {
            printf("%d element is deleted",Q[f]);
            f=(f+1)%size;
        }
    }
}
void display()
{
    if (f==-1)
    printf("underflow");
    else
    {
        int i =f;
        while(1)
        {
            printf("%d", Q[i]);
            if(i==r)
            break;

        }
        i=(i+1)%size;
    }
}
int main()
    {

        int choice, data;

        while (1)
        {
            printf("\n1.Insert");
            printf("\n2.Delete");
            printf("\n3.Display");
            printf("\n4.Exit");
            printf("\nEnter Choice: ");
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
                return 0;

            default:
                printf("Invalid Choice\n");
            }
        }
    }
    


