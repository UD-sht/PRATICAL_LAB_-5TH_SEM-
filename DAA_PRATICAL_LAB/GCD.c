#include<stdio.h>

int gcd(int a, int b)
{
    int temp,d;
    while(b!=0)
    {
        d = a/b;
        temp = b;
        b = a - b*d;
        a = temp;
    }
    return a;
}
int main()
{
    int a,b;
    printf("Enter the value for a and b: ");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}