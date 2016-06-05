//count the no of ways he can reach the home
#include<iostream>
using namespace std;
typedef long long int ll;
ll N=20,K=5;
ll A[100];
ll f(ll index)
{
	if(index==N) return 1;
	if(index>N) return 0;
	ll i,c=0;
	for(i=index+1;i<=(index+K);i++)
	{
		c=c+f(i);
	}
	return c;
}
ll f_fast(ll index)
{
	if(A[index]!=0) return A[index];
	if(index==N)
	{
		A[index]=1;
		return 1;
	} 
	if(index>N)
	{
		A[index]=0;
		return 0;
	} 
	ll i,c=0;
	for(i=index+1;i<=(index+K);i++)
	{
		if(A[i]!=0)
		{
			c=c+A[i];	
		}
		else
		{
			A[i]=f(i);
			c=c+A[i];
		}
	}
	A[index]=c;
	return c;
}
int main()
{
	A[N]=1;
	//cout<<f_fast(1)<<endl;
	int i;
	for(i=N-1;i>=1;i--)
	{
		int j=i;
		for(j=i+1;j<=(i+K);j++)
		{
			A[i]+=A[j];
		}
	}
		//A[i]=A[i+1]+A[i+2];
	cout<<A[1];
}
