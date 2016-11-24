#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,t;
	cin>>N;
	int *p = new int[N+1];
	for(int i=1;i<=N;i++)
	{
		cin>>t;
		p[t]=i;
	}
	for(int i=1;i<=N;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
