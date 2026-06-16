#include <stdio.h>
#include <string.h>

int main()
{
    char m1[100][20];
    int i, j, n;
    char k[20];

    printf("enter the size of arr:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the string: at M[%d]: ", i);
        scanf(" %s", &m1[i]);
    }
    //  insertion sort
    for (i = 1; i < n; i++)
    {
        strcpy(k, m1[i]);
        j = i - 1;
        while (j >= 0 && strcmp(m1[j], k) > 0)
        {
            strcpy(m1[j + 1], m1[j]);
            j--;
        }
        strcpy(m1[j + 1], k);
    }

    //  print sorted m1
    for (i = 0; i < n; i++)
    {
        printf("%s ", m1[i]);
    }
}