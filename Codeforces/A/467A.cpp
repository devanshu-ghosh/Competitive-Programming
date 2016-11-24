#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int p,q,c=0;
	for(int i=1;i<=N;i++)
	{
		cin>>p>>q;
		if((q-p)>=2)	c++;
	}
	cout<<c<<endl;
}
