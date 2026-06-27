#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct node
{
    char data[30];
    struct node *address;
};

int main()
{
    struct node *current, *head = NULL, *temp;
    int n, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        temp = (struct node *)calloc(1, sizeof(struct node));

        printf("Enter the string: ");
        scanf("%s", temp->data);

        temp->address = NULL;

        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->address = temp;
            current = temp;
        }
    }

    /* Display Linked List */
    temp = head;
    printf("\nLinked List: ");

    while (temp != NULL)
    {
        printf("%s> ", temp->data);
        temp = temp->address;
    }

    printf("NULL\n");

    return 0;
}