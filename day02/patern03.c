#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
    {
        for(int j = num ; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}