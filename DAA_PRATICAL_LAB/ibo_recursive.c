#include<stdio.h>
int fibo(int n)
{
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,i;
    printf("Enter the nth term of fibonacci series:\t");
    scanf("%d",&n);
    printf("Fibanacci series:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}