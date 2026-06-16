#include <stdio.h>
int main()
{
    char arr[100] = {0};
    int i, j, n, min, temp;

    printf("enter the total index:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]: ", i);
        scanf(" %c", &arr[i]);
    }
    //  selection sort
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    //  print sorted arr
    for (i = 0; i < n; i++)
    {
        printf(" %c ", arr[i]);
    }
}