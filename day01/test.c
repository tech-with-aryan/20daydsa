#include <stdio.h>
int main()
{
    int x;
    int y;
    char c;

    printf("enter any number  and operator: ");
    scanf("%d%d %c",&x,&y,&c);
    
    if (c=='+')
    {
        printf("sum =%d",x+y);
    }
    else if (c == '-')
    {
        /* code */
        printf("differnce =%d", x - y);
    }

    return 0;
}