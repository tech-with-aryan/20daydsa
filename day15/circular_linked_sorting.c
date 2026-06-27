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
    struct node *current, *head = NULL, *tail = NULL;
    struct node *i, *j, *min, *temp;
    int n, k;
    char str[30];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Create Circular Doubly Linked List
    for (k = 0; k < n; k++)
    {
        current = (struct node *)malloc(sizeof(struct node));

        printf("Enter string: ");
        scanf("%s", current->data);

        current->next = NULL;
        current->prev = NULL;

        if (head == NULL)
        {
            head = current;
            tail = current;
            head->next = head;
            head->prev = head;
        }
        else
        {
            current->prev = tail;
            current->next = head;
            tail->next = current;
            head->prev = current;
            tail = current;
        }
    }

    // Selection Sort
    for (i = head; i->next != head; i = i->next)
    {
        min = i;

        for (j = i->next; j != head; j = j->next)
        {
            if (strcmp(j->data, min->data) < 0)
            {
                min = j;
            }
        }

        if (min != i)
        {
            strcpy(str, i->data);
            strcpy(i->data, min->data);
            strcpy(min->data, str);
        }
    }

    // Display Sorted List
    printf("\nSorted List:\n");

    temp = head;
    do
    {
        printf("%s\n", temp->data);
        temp = temp->next;
    } while (temp != head);

    return 0;
}