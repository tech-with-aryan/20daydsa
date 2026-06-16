#include <stdio.h>
void main()
{
    int A[20] = {0}, i, n=10;
    int even=0;
    int odd=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter an element%d:", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(A[i]%2==0)
        {
            even+=1;
        }
        else
        {
        odd+=1;
        }
    }
    printf("even=%d odd=%d", even,odd);
}
