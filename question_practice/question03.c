#include <stdio.h>

char *check(int arr[], int n)
{
    int inc = 1, dec = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
            inc = 0;

        if (arr[i] <= arr[i + 1])
            dec = 0;
    }

    if (inc)
        return "increasing";
    else if (dec)
        return "decreasing";
    else
        return "neither";
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%s", check(arr, n));

    return 0;
}