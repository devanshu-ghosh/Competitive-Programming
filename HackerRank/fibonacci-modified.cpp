#include<iostream>
typedef long long int ll;
using namespace std;
int main()
{
	int A,B,N;
	cin>>A>>B>>N;
	ll* f = new ll[N+1];
	f[0]=A;
	f[1]=B;
	for(int i=2;i<=N;i++)
	{
		f[i]=f[i-1]*f[i-1] + f[i-2];
	}
	cout<<f[N]<<endl;
}
