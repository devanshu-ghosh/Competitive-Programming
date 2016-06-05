#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
	int i,flag=1,x=sqrt(n);
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
	int N;
	cin>>N;
	int k=4;
	if(N&1)
	{
		while(isPrime(N-k))
			k+=2;
		cout<<k<<" "<<N-k<<endl;
	}
	else
	{
		cout<<k<<" "<<N-k<<endl;
	}
}
