#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *address;
};
void main()
{
    struct node *c;
    c=(struct node *)calloc(1,sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&c->data);
    printf("data is : %d",c->data);
    free(c);
    c=NULL;
}