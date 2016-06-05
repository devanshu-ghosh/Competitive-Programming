#include<iostream>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
int main()
{
	int T;
	ll N,M;
	cin>>T;
	while(T--)
	{
		cin>>N>>M;
		if(M==0)
		{
			if(N==1) cout<<"Yes\n";
			else cout<<"No 1\n";
		}
		else if(M==1 || (N==(M+1)))
			cout<<"Yes\n";
		else
		{
			ll K=N/gcd(N,M);
			if(K==N)
				cout<<"Yes\n";
			else cout<<"No "<<K<<endl;
		}
	}
}
