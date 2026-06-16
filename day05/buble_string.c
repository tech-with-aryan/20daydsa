#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100][20];
    char temp[20];
    int i, j, n;

    printf("enter the total size:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]: ", i);
        scanf(" %s", &arr[i]);
    }
    //  bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {

                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    //  print sorted arr
    for (i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }
}                                                                                                                                                                                                                                                       