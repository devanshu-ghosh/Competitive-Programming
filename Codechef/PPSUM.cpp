#include<iostream>
using namespace std;
int sum(int n)
{
	return (n*(n+1)/2);
}
int main()
{
	int T,N,D;
	cin>>T;
	int ans;
	while(T--)
	{
		cin>>D>>N;
		ans=N;
		while(D--)
		{
			ans=sum(ans);
		}
		cout<<ans<<endl;
	}
}
