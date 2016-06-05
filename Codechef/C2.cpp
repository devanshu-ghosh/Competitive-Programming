#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int ll;
inline void read(ll *a)
{
	char c=0;
	*a=0;
	while((c=fgetc_unlocked(stdin)) > 33)
	{
		*a=*a * 10 +c - '0';
	}
}
ll ModExpSuperFast(ll base,ll index,ll m)
{
	ll y=1;
	while(index)
	{
		if(index&1)//if odd
			y=((y%m)*(base%m))%m;
		index=index>>1;
		//base=(base*base)%m;
		base=((base%m)*(base%m))%m;
	}
	return y;
}
int main()
{
	int T;
	ll N,K,P;
	ll s=0;
	cin>>T;
	while(T--)
	{
		//cin>>N>>K>>P;
		read(&N);
		read(&K);
		read(&P);
		ll i;
		if(P==1)
		{
			cout<<"0"<<endl;
		}
		else
		{
			for(i=1;i<=N;i++)
			{
				s=s+ModExpSuperFast(i,K,P);
				s=s%P;
			}
			cout<<s<<endl;
			s=0;
		}
	}
	return 0;
}
