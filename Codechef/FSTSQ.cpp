#include<iostream>
using namespace std;
typedef long long int ll;
ll A[2000005];
ll m=1E9 + 7;
int main()
{
	int T,N,D,i,j;
	cin>>T;
	while(T--)
	{
		cin>>N>>D;
		int total=2*N-1;
		D=D*D;
		for(i=0;i<N;i++)
			A[i]=D*(i+1);
		j=N-1;
		for(i=N;i<(total);i++)
		{
			A[i]=D*(j);
			j--;
		}
		for(i=0;i<(total);i++)
		{
			A[i+1]+=A[i]/10;
			A[i]=A[i]%10;
		}
		ll sum=0,q=1;
		for(i=total;i>=0;i--)
		{
			if(A[i]!=0)
			{
				sum+=(q*A[i]*1LL)%m;;
				sum=sum%m;
			}
			q=(q*23LL)%m;
		}
		if(sum>m) sum=sum%m;
		//sum-=m;
		cout<<sum<<endl;
		for(i=0;i<=total;i++) A[i]=0;
	}
}
