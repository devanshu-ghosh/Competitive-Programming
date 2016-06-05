#include<stdio.h>
typedef long long int ll;
int A[9];//stores the unique values
ll f(ll n)
{
	if(n%9==0) return 9;
	else return n%9;
}
int main()
{
	ll L,R,T,A1,D;
	scanf("%lld",&T);
	//cin>>T;
	while(T--)
	{
		scanf("%lld%lld%lld%lld",&A1,&D,&L,&R);
		//cin>>A1>>D>>L>>R;
		ll times=(R-L)/9;
		ll mod=(R-L)%9;
		ll sum=0,t_sum=0;
		A1=f(A1);
		D=f(D);
		int i;
		A[0]=f(A1+f(L-1)*D);
		t_sum=A[0];
		for(i=1;i<9;i++)
		{
			A[i]=f(A[i-1]+D);
			t_sum+=A[i];
		}
		for(i=0;i<=mod;i++)
			sum+=A[i];
		sum+=times*t_sum;
		printf("%lld\n",sum);
		//cout<<sum<<endl;
	}
}
