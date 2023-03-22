#include <stdio.h>
int extended_euclid(int a, int b, int* x, int* y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extended_euclid(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcd;
}
int mod_inverse(int a, int m)
{
    int x, y;
    int gcd = extended_euclid(a, m, &x, &y);
    if (gcd != 1)
        return -1; // no inverse exists
    return (x % m + m) % m;
}
int main()
{
	int a,m,inv;
	printf("Input value of a and modulo m:\n");
	scanf("%d%d",&a,&m);
    inv=mod_inverse(a, m);
    if (inv==-1)
        printf("%d has no inverse modulo %d\n",a,m);
    else
        printf("The inverse of\n%d modulo %d is %d\n", a, m, inv);
    return 0;
}

#include<stdio.h>
int extended_euclid(int a, int b, int* x,int* y)
{
    if(b==0)
    {
        *x=1;
        *y=0;
        return a;
    }
    int x1,y1;
    int gcd = extended_euclid(b,a%b,&x1,&y1);
    *x = y1;
    *y = x1-(a/b)*y1;
    return gcd;
}
int mod_inverse(int a,int m)
{
    int x,y;
    int gcd = extended_euclid(a,m,&x,&y);
    if(gcd!=1)
    {
        return -1;
    }
    return(x%m+m)%m;
}

int main()
{
    int a,m,inv;
    printf("INput value of a and modulo %d\n");
    scanf("%d%d",&a,&m);
    if(inv==-1)
    {
        printf("%d has no inverse modulo %d\n",a,m);
    }
    else
    {
        printf("The inverse of\n%d");
    }

}
