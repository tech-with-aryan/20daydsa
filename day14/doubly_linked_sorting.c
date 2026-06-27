#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data[30];
    struct node *prev;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *tail = NULL;
    struct node *current, *temp, *ptr;
    int n, i;
    char str[30];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Creating Doubly Linked List
    for (i = 0; i < n; i++)
    {
        current = (struct node *)malloc(sizeof(struct node));

        printf("Enter string %d: ", i + 1);
        scanf("%s", current->data);

        current->prev = NULL;
        current->next = NULL;

        if (head == NULL)
        {
            head = current;
            tail = current;
        }
        else
        {
            tail->next = current;
            current->prev = tail;
            tail = current;
        }
    }

    // Sorting (Bubble Sort)
    for (temp = head; temp != NULL; temp = temp->next)
    {
        for (ptr = temp->next; ptr != NULL; ptr = ptr->next)
        {
            if (strcmp(temp->data, ptr->data) > 0)
            {
                strcpy(str, temp->data);
                strcpy(temp->data, ptr->data);
                strcpy(ptr->data, str);
            }
        }
    }

    printf("\nStrings in Ascending Order:\n");

    temp = head;
    while (temp != NULL)
    {
        printf("%s ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    return 0;
}