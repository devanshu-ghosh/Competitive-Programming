#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll;
ll isPerfect(ll x)
{
	ll r = int(sqrt(x));
	return ((r*r)==x);
}
ll isPrime(ll n)
{
	ll i,flag=1,x=sqrt(n);
	for(i=3;i<=x;i=i+2)
	{
		if(n%i==0)
		{
			flag=0;break;
		}
	}
	return flag;
}
int main()
{
	int N,temp;
	cin>>N;
	while(N--)
	{
		cin>>temp;
		if(temp%2==0)
		{
			if(temp==4)
				cout<<"YES\n";
			else
				cout<<"NO\n";
			continue;
		}
		if(isPerfect(temp))
		{
			temp = ll(sqrt(temp));
			if(isPrime(temp))
			{
				cout<<"YES\n";
			}
			else 
				cout<<"NO\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}
