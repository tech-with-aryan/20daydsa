#include <stdio.h>

void merge(char arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int k = 0;
    char temp[100];

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
            temp[k++] = arr[left++];
        else
            temp[k++] = arr[right++];
    }

    while (left <= mid)
        temp[k++] = arr[left++];

    while (right <= high)
        temp[k++] = arr[right++];

    for (int i = low, j = 0; i <= high; i++, j++)
        arr[i] = temp[j];
}

void mergesort(char arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    char arr[100];
    int n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    printf("Enter %d characters:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]); // space important hai
    }

    mergesort(arr, 0, n - 1);

    printf("Sorted characters: ");

    for (int i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }

    return 0;
}