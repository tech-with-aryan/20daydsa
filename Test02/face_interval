#include <stdio.h>
void faceInterval(int arr[],int n)
{
     int i;
    int diff=arr[n-1]-arr[0];
    int same=0;
    for (i=0; i < n; i++)
    {
        if (arr[i]==diff)
        {
            same=1;
            break;
        }
        
    }
    if (same)
    {
        printf(":)");
    }
else
{
    printf("(:");
}
}
int main(){
    int arr[100]={0};
    int i,j,n,temp;
    
    printf("enter the total size:");
    scanf("%d",&n);


    for ( i = 0; i < n; i++)
    {
        printf("enter the element: at M[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    //  sort 
    for ( i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                
            
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    
    faceInterval(arr,n);

}