#include<iostream>
using namespace std;
int main()
{
	int N,M;
	int max,min;
	cin>>M>>N;
	max=(M>=N)?M:N;
	min=M+N-max;
	int v=max/2;
	int ans=0;
	ans+=min*v;
	int r=max-(2*v);
	r=min*r;
	ans+=(r/2);
	cout<<ans<<endl;
}
