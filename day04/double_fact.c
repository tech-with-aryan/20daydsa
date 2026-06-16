#include<stdio.h>
long long doublefact(int n)
{
    if(n==0 || n==-1)
    return 1;
    return n* doublefact(n-2);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("double fact=%11d",doublefact(n));
    return 0;
}
