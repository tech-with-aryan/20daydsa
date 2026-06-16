#include <stdio.h>
#include <string.h>

void reverse(char str[])
{
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}