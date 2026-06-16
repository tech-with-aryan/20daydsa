#include <stdio.h>
int binary_search(int low, int high, int arr[10], int k)
{

    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == k)
    {
        return mid;
    }
    if (arr[mid] < k)
    {
        return binary_search(mid + 1, high, arr, k);
    }
    return binary_search(low, mid - 1, arr, k);
}
int main()
{
    int arr[100] = {0};
    int i, n, k;
    int low, high, mid;

    printf("enter the total index:");
    scanf("%d", &n);
    printf("enter the element to be searched:");
    scanf("%d", &k);
    low = 0;
    high = n - 1;

    for (i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]", i);
        scanf("%d", &arr[i]);
    }
    int result = binary_search(low, high, arr, k);
    if (result == -1)
    {
        printf("element not found ");
    }
    else
    {
        printf("element found at index : %d", result);
    }
}