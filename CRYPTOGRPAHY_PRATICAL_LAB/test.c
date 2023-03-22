#include<stdio.h>
long long int power(int a, int b, int mod)
{
	long long int t;
	if(b==1)
	  return a;
	t=power(a,b/2, mod);
	if(b%2==0)
	  return (t*t)%mod;
	else
	  return (((t*t) %mod) *a) %mod;
}
long int calculateKey (int a, int x, int n)
{
	return power(a,x,n);
}
int main()
{
	int en,g,x,a,y,b;
	printf ("Enter the value of n and g:\n");
	scanf("%d %d", &en, &g);
	printf("Enter the value of x for the first person:\n");
	scanf("%d",&x);
	a=power(g,x,en);
	printf("Enter the value of y for the second person:\n");
	scanf("%d", &y);
	b=power(g,y,en);
	printf("key for the first person is :%lld\n",power(b,x,en));
	printf("key for the second person is : %lld\n",power(a,y,en));
	return 0;
}