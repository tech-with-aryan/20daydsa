#include <stdio.h>
int main()
{

    int element[20] = {0};
    int n = 6;
    int pro = 1;

    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d: ", i);
        scanf("%d", &element[i]);
    }
    for (int i = 0; i < n; i++)
    {
        pro = pro * element[i];
    }
    printf("product of 6 numbers is %d", pro);
}