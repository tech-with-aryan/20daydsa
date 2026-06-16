#include <stdio.h>
int equal(int a, int b, int c);
int main()
{

    int a, b, c;
    // a=b=c=0;
    printf("enter the 3 number\t");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", equal(a, b, c));
}
int equal(int a, int b, int c)
{
    if (a == b && a == c)
    {
        return 3;
    }
    else if (a == b)
    {
        return 2;
    }
    else if (b == c)
    {
        return 2;
    }
    else if (a == c)
    {
        return 2;
    }

    else
    {
        return 0;
    }
}