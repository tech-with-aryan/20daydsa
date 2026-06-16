#include <stdio.h>
void main ()
{
    int A[20]={0},i,sum=0;
    for(i=0;i<6;i++)
    {
        printf("enter an element: ");
        scanf("%d",&A[i]);
    }
    for(i=0;i<6;i++)
    {
        sum=sum + A[i];
    }
    printf("the sum of number is %d",sum);
 
}
