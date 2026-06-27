#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void main()
{
    struct node *current,*temp,*head=NULL,*tail=NULL;
    int i,n;
    printf("enter the size of n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        current=(struct node*)malloc(sizeof(struct node));
        current->prev=NULL;
        current->next=NULL;
        printf("enter a no");
        scanf("%d",&current->data);
        if(head==NULL)
        {
            head=current;
            tail=current;
        }
        else
        {
            tail->next=current;
            current->prev=tail;
            tail=current;
        }
    }
    temp=tail;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->prev;
    }
}