#include<iostream>
using namespace std;
int main()
{
	int T,N,K,temp,sum=0;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		while(N--)
		{
			cin>>temp;
			sum+=(temp/K);
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}
