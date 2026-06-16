#include <stdio.h>
#include <string.h>

int main()
{
    char m1[100][20];
    int i, j, n;
    int min;
    char temp[20];

    printf("enter the size of arr:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the string: at M[%d]: ", i);
        scanf(" %s", &m1[i]);
    }
    //  selection sort
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i; j < n; j++)
        {
            if (strcmp(m1[min], m1[j]) > 0)
            {
                min = j;
            }
        }
        strcpy(temp, m1[min]);
        strcpy(m1[min], m1[i]);
        strcpy(m1[i], temp);
    }
    //  print sorted m1
    for (i = 0; i < n; i++)
    {
        printf("%s ", m1[i]);
    }
}