#include<stdio.h>
int main()
{
    int arr[] = {1,0,1,0};
    int n = 4;
    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;
        for(int j = 0; j < i; j++)
        {
        if(arr[i] == arr[j])
           {
            duplicate = 1;
            break;

          }
        }
        if(!duplicate)
        {
            printf("%d", arr[i]);
        }
    
    
    }
    return 0;
}