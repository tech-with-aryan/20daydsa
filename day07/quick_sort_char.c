#include <stdio.h>
int partition(char arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1, j;
    char temp;
    for (j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quicksort(char arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

void main()
{
    char arr[20], i, n;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("enter %d elements", n);
    for (i = 0; i < n; i++)
        scanf(" %c", &arr[i]);
    quicksort(arr, 0, n - 1);
    printf("sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }
}