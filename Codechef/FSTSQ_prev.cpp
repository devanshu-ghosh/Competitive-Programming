#include<iostream>
using namespace std;
typedef long long int ll;
ll A[2000005];
ll m=1000000007;
int main()
{
	int T,N,D,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>D;
		int total=2*N-1;
		D=D*D;
		for(i=0;i<N;i++)
			A[i]=D*(i+1);
		int j=N-1;
		for(i=N;i<(total);i++)
		{
			A[i]=D*(j);
			j--;
		}
		//carry function
		for (i=0;i<(total);i++)
		{
			if(A[i]>9)
			{
				A[i + 1] += A[i] / 10;
				A[i] = A[i] % 10;
			}
		}
		while(A[total])
		{
			A[total+1]+=A[total]/10;
			A[total]= A[total] % 10;
			total++;
		}
		int u=total;
		ll sum=0;
		ll q=1;
		for(i=total-1;i>=0;i--)
		{
			if(A[i]!=0)
			{
				sum+=(q*A[i])%m;
				sum=sum%m;
			}
			if(q>m) q=q%m;
			q=(q*23)%m;
		}
		cout<<sum<<endl;
		for(i=0;i<=(u+10);i++) A[i]=0;
	}
} 
