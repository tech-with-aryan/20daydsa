#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter number of fruits: ");
    scanf("%d", &n);

    char fruits[n][50];
    char chunks[2 * n][50];
    int k = 0;

    // Input fruits
    for (int i = 0; i < n; i++)
    {
        printf("Enter fruit %d: ", i + 1);
        scanf("%s", fruits[i]);
    }

    // Split fruits into chunks
    for (int i = 0; i < n; i++)
    {
        int len = strlen(fruits[i]);
        int mid = len / 2;

        char left[50], right[50];

        strncpy(left, fruits[i], mid);
        left[mid] = '\0';

        strcpy(right, fruits[i] + mid);

        strcpy(chunks[k++], left);
        strcpy(chunks[k++], right);
    }

    // Sort chunks alphabetically
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (strcmp(chunks[i], chunks[j]) > 0)
            {
                char temp[50];
                strcpy(temp, chunks[i]);
                strcpy(chunks[i], chunks[j]);
                strcpy(chunks[j], temp);
            }
        }
    }

    // Print final result
    printf("\nFinal String: ");

    for (int i = 0; i < k; i++)
    {
        printf("%s", chunks[i]);
    }

    return 0;
}