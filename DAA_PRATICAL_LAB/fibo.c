#include<stdio.h>

int main()
{
    int a,b,fibo,n;
    printf("Enter the value for nth term:\t");
    scanf("%d",&n);
    printf("Enter the value for a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Fibonaci Series:\n");
    printf("%d\t%d\t",a,b);
    for(int i=0;i<n-2;i++)
    {
        fibo=a+b;
        a = b;
        b = fibo;
        printf("%d\t",fibo);
    }
    return 0;
}