#include <stdio.h>
#include <string.h>

int partition(char str[][20], int low, int high)
{
    char pivot[20], temp[20];
    strcpy(pivot, str[high]);

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (strcmp(str[j], pivot) <= 0)
        {
            i++;

            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
        }
    }

    strcpy(temp, str[i + 1]);
    strcpy(str[i + 1], str[high]);
    strcpy(str[high], temp);

    return i + 1;
}

void quicksort(char str[][20], int low, int high)
{
    if (low < high)
    {
        int p = partition(str, low, high);

        quicksort(str, low, p - 1);
        quicksort(str, p + 1, high);
    }
}

int main()
{
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][20];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    quicksort(str, 0, n - 1);

    printf("\nSorted strings are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}