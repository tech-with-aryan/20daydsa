#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int row, col, i, j;

    printf("enter row and column: ");
    scanf("%d %d", &row, &col);

    printf("enter the element of matrics:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose nikalna
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose Matrix:\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}