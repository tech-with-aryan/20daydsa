#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int left, right, k;
    int temp[100];

    left = low;
    right = mid + 1;
    k = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp[k] = arr[left];
            left++;
        }
        else
        {
            temp[k] = arr[right];
            right++;
        }
        k++;
    }

    while (left <= mid)
    {
        temp[k] = arr[left];
        left++;
        k++;
    }

    while (right <= high)
    {
        temp[k] = arr[right];
        right++;
        k++;
    }

    for (int i = low, j = 0; i <= high; i++, j++)
    {
        arr[i] = temp[j];
    }
}

void mergesort(int arr[], int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, n - 1);

    printf("Sorted Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}