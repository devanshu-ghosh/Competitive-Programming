#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,N;
	cin>>a>>b>>N;
	int turn=1;
	while(N>=0)
	{
		if(turn==1)
		{
			N-=__gcd(a,N);
		}
		else
		{
			N-=__gcd(b,N);
		}
		if(N==0)
			break;
		else
			turn*=-1;
	}
	if(turn==1) cout<<"0"<<endl;
	else	cout<<"1"<<endl;
}

