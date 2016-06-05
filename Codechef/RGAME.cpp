#include<iostream>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int A[100005];
ll f(int N)
{
	int i;
	//ll ans=(2*A[0]*A[1]*1LL)%MOD;
	ll ans=(((2*A[0])%MOD)*A[1])%MOD;
	for(i=3;i<=N;i++)
	{
		ll new_sum=0,coeff=1;
		for(int j=0;j<(i-1);j++)
		{
			if(j<=1) coeff=1;
			else	coeff*=2;
			coeff=coeff%MOD;//bcoz for large N it 2^N can easily exceed the value
			//new_sum+=(coeff*A[j]*A[i-1]*1LL)%MOD;
			new_sum+=(((coeff*A[j])%MOD)*A[i-1])%MOD;
		}
		ans=2*((ans+new_sum)%MOD);
	}
	return ans%MOD;
}
int main()
{
	int T,N;
	ll ans=0;
	cin>>T;
	while(T--)
	{
		cin>>N;
		N++;
		for(int i=0;i<N;i++)
			cin>>A[i];
		if(N==2)
		{
			ans=(((2*A[0])%MOD)*A[1])%MOD;
		}
		else
		{
			ans=(f(N)%MOD);
		}
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}
