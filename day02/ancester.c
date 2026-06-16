#include <stdio.h>
int main()
{
    int x;
    printf("enter the generation from -3 to 3 supported:");
    scanf("%d", &x);
    char y;
    printf("enter the gender in m/f: ");
    scanf(" %c", &y);
    if (x == -3)
    {
        if (y == 'm')
        {
            printf("great grandfather");
        }
        else if (y == 'f')
        {
            printf("great grandmother");
        }
    }
    else if (x == -2)
    {
        if (y == 'm')
        {
            printf("grandfather");
        }
        else if (y == 'f')
        {
            printf("grandmother");
        }
    }
    else if (x == -1)
    {
        if (y == 'm')
        {
            printf("father");
        }
        else if (y == 'f')
        {
            printf("mother");
        }
    }
    else if (x == 0)
    {
        if (y == 'm')
        {
            printf("me!");
        }
        else if (y == 'f')
        {
            printf("me!");
        }
    }
    else if (x == -1)
    {
        if (y == 'm')
        {
            printf("Son");
        }
        else if (y == 'f')
        {
            printf("daughter");
        }
    }
    else if (x == 2)
    {
        if (y == 'm')
        {
            printf("grandson");
        }
        else if (y == 'f')
        {
            printf("granddaughter");
        }
    }
    else if (x == 3)
    {
        if (y == 'm')
        {
            printf("great grandson");
        }
        else if (y == 'f')
        {
            printf("great granddaughter");
        }
    }
}