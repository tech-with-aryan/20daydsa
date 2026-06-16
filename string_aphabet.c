#include <stdio.h>
#include <string.h>

void sortString(char str[])
{
    int len = strlen(str);

    // String ke characters ko ascending order me sort karna
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                char ch = str[i];
                str[i] = str[j];
                str[j] = ch;
            }
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    sortString(str);

    printf("Sorted String = %s", str);

    return 0;
}