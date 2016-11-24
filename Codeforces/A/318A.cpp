#include<iostream>
using namespace std;
int main()
{
	long long int N,K,check,v;
	cin>>N>>K;
	if(N&1)//odd
	{
		check=(N+1)/2;
		v=2*1LL*(K-(N/2)-1);
	}	
	else
	{
		check=(N)/2;
		v=2*1LL*(K-(N/2));
	}
		
	if(K<=check)
		cout<<2*K*1LL-1<<endl;
	else
	{
		cout<<v<<endl;
	}	
}
