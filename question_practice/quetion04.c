#include <stdio.h>

void posnegsort(int arr[], int size)
{
    int i, j, temp;

    // Sort positive numbers in ascending order.
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > 0 && arr[j] > 0 && arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Sort negative numbers in descending order.
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] < 0 && arr[j] < 0 && arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the total size: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
    {
        printf("Invalid size. Please enter a value between 1 and 100.\n");
        return 1;
    }

    int arr[100] = {0};
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    posnegsort(arr, n);
    return 0;
}
