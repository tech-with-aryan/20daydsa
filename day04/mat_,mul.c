#include <stdio.h>
#include <string.h>

int input_2matrix(int m1[][10], int m2[][10], int r1, int c1, int r2, int c2, int i, int j)
{

    printf("enter 1st Matrix :\n");
    for (i = 0; i < r1; i++)
    {

        for (j = 0; j < c1; j++)
        {
            printf("enter element  m1[%d][%d] :", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("enter 2nd Matrix :\n");
    for (i = 0; i < r2; i++)
    {

        for (j = 0; j < c2; j++)
        {
            printf("enter element  m2[%d][%d] :", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    return 0;
}

static void print_matrix(const char *title, int m[][10], int rows, int cols)
{
    printf("%s (%dx%d):\n", title, rows, cols);
    for (int ii = 0; ii < rows; ++ii)
    {
        for (int jj = 0; jj < cols; ++jj)
            printf("%d\t", m[ii][jj]);
        printf("\n");
    }
}
int matrix_addition(int m1[][10], int m2[][10], int add[][10], int r1, int c1, int r2, int c2, int i, int j)
{

    if (r1 != r2 || c1 != c2)
    {
        printf("Cant perform Matrix Addition ");
    }
    else
    {
        input_2matrix(m1, m2, r1, c1, r2, c2, i, j);

        print_matrix("Matrix 1", m1, r1, c1);
        print_matrix("Matrix 2", m2, r2, c2);

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                add[i][j] = m1[i][j] + m2[i][j];
            }
        }
        printf(" Addition of Matrix :\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", add[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
