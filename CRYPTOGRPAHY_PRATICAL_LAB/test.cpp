#include<iostream>
#include<cmath>
#include<time.h>
#include<random>
using namespace std;
int modExpo(int a, int b, int c)
{
	int x=1;
	int y=a;
	while(b>0)
	{
		if(b%2==0)
		{
			y=(y*y)%c;
			b=b/2;
		}
		else
		{
			x=(x*y)%c;
			b=b-1;
		}
	}
	return x%c;
}
int main()
{
	int q,g,m,xa,ya,k,r,c1,c2;
	cout<<"Elgamel Encryption\n";
	cout<<"Enter a prime number for q:\n";
	cin>>q;
	cout<<"Enter a primitive root for g:\n";
	cin>>g;
	cout<<"Enter a message value for m:\n";
	cin>>m;
	srand(time(0));
	xa=rand()%(q-2)+1;
	ya=modExpo(g,xa,q);
	k=rand()%(q-1)+1;
	r=modExpo(ya,k,q);
	c1=modExpo(g,k,q);
	c2=(r*m)%q;
	cout<<"\nCipher Text: "<<c1<<", "<<c2<<endl;
	cout<<"\nElgamal Decryption\n";
	k=modExpo(c1,xa,q);
	r=modExpo(k,q-2,q);
	m=(c2*r)%q;
	cout << "\nPlain Text: "<<m<<endl;
	return 0;
}