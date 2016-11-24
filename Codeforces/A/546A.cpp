#include<iostream>
using namespace std;
int main()
{
	long long int K,N,W;
	cin>>K>>N>>W;
	long long int amount = (K*W*(W+1)*1LL)/2;
	if(amount<=N)
		cout<<"0"<<endl;
	else
	{
		cout<<amount-N<<endl;
	}
}
