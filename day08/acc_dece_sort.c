#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int merge[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++)
        merge[k++] = arr1[i];

    for (int i = 0; i < n2; i++)
        merge[k++] = arr2[i];

    int ascending = 1;

    if (n1 > 1 && arr1[0] > arr1[1])
        ascending = 0;

    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (ascending)
            {
                if (merge[i] > merge[j])
                {
                    int temp = merge[i];
                    merge[i] = merge[j];
                    merge[j] = temp;
                }
            }
            else
            {
                if (merge[i] < merge[j])
                {
                    int temp = merge[i];
                    merge[i] = merge[j];
                    merge[j] = temp;
                }
            }
        }
    }

    printf("\nMerged Sorted Array:\n");

    for (int i = 0; i < k; i++)
        printf("%d ", merge[i]);

    return 0;
}