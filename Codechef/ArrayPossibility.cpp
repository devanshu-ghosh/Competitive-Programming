#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
	int T;
	ll N,M;
	cin>>T;
	while(T--)
	{
		cin>>N>>M;
		if(M==0)
		{
			if(N==1) cout<<"Yes\n";
			else cout<<"No 1\n";
		}
		else if(M==1 || (N==(M+1)))
			cout<<"Yes\n";
		else
		{
			ll K=2;
			while((K*M+1)%N != (M+1))
				K++;
			K--;
			if(K==N)
				cout<<"Yes\n";
			else cout<<"No "<<K<<endl;
		}
	}
}
