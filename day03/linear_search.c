#include <stdio.h>
int main()
{

    int element[20] = {0};
    int n = 5;
    int search;
    printf("enter the element to search:");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d: ", i);
        scanf("%d", &element[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (element[i] == search)
        {
            printf("element found at index %d\n", i);
            break;
        }
    }
}
