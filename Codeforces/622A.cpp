#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
	ll N;
	cin>>N;
	int n=1;
	ll u=1;
	while(u<N)
	{
		n++;
		u+=n;
	}
	u-=n;	
	N-=u;
	cout<<N<<endl;
}
