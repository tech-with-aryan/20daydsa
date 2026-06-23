#include<stdio.h>
void posnegsort(int arr[], int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if ((arr[j]>0) && (arr[i]>0)&& arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{
    int n;
    printf("enter the total size:");
    scanf("%d", &n);
    int arr[100]={0};
    int i;
    for(i=0; i<n; i++)
      {
         printf("enter the element : at M[%d] :",i);
         scanf("%d",&arr[i]);
      }
    posnegsort(arr,n);
    
}