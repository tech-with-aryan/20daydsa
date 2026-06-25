#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i,n,n2;
    printf("enter the size of element");
    scanf("%d",&n);
    ptr = (int*)(malloc(n*sizeof(int)));
    for(i=0; i<n; i++)
    {
        printf("enter the element of ptr[%d]",ptr);
        scanf("%d",&ptr[i]);
    }
    printf("enter the new size");
    scanf("%d",&n2);
    ptr=(int*)(realloc(ptr,n2*sizeof(int)));
    if(n2>n)
    {
        for(i=n; i<n2; n++)
        {
            printf("enter the elements of ptr[%d]",ptr[i]);
            scanf("%d",&ptr);
        }
    }
    for(i =0; i < n2; i++)
    {
        printf("%d",ptr[i]);
    }
}