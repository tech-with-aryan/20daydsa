#include <stdio.h>

int sum(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{    int arr[] = {1, 2, 8,7};
    int n = 4;

    printf("Sum = %d", sum(arr, n));

    return 0;
}