#include<stdio.h>
#define size 6
int stack[size-1];
int top=-1;
void push()
{
    if (top > size-1)
    printf("stack is overflow");
    else 
    {
        int d;
        scanf("%d", &d);
        top=top+1;
        stack[top]=d;
    }
}
void pop()
{
    if (top == -1)
    printf("stack is underflow");
    else
    printf("%d element is deleted",stack[top]);
    top=top-1;
}
void display()
    {
        int i;
        if (top==-1)
        printf("stack is underflow");
        else
        for(i=0; i<=top; i++)
        printf("%d", stack[i]);

    }
int main()
{
    int c;
    while(1)
    {
        printf("enter 1 to push 2 to pop 3to display 4 to exit");
        scanf("%d",&c);
        switch(c)
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
             return 0;
             case 5:
             default:
             printf("wrong input");

        }
    }
}