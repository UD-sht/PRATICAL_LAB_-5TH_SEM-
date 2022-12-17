#include<stdio.h>

int main()
{
    int a=0,b=1,fibo,n;
    printf("Enter the nth term:");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for(int i=0;i<n-2;i++)
    {
        fibo=a+b;
        a=b;
        b=fibo;
        printf("\t%d",fibo);
    }
    return 0;
}