#include <stdio.h>
int pascal(int r, int c)
{
    if (c == 0 || r == c)
    {
        return 1;
    }
    else
    {
        return pascal(r - 1, c - 1) + pascal(r - 1, c);
    }
}
int main()
{
    // 1
    // 11
    // 121
    // 1331
    int i, j, n;
    printf("enter the valud on n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", pascal(i, j));
        }
        printf("\n");
    }
}
