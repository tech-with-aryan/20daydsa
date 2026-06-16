#include<stdio.h>
int largest(int arr[],int n)
{
    if (n==1)
    return arr[0];
    int max = largest(arr , n - 1);
    if(arr[n - 1] > max)
    return arr[n - 1];
    else
    return max;
}
int main()
{
int arr[] = {10,25,7,40,15};
int n = 5;
printf("largest num =%d",largest(arr , n));
return 0;
}
