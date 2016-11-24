#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int N,a,b,count=0,max=-1;
	cin>>N;
	while(N--)
	{
		cin>>a>>b;
		count-=a;
		count+=b;
		if(count>max) max=count;
	}
	cout<<max<<endl;
}
