#include<bits/stdc++.h>
using namespace std;
int ans(int N,int M)
{
	return N + ((N-1)/(M-1));
}
int ans2(int N,int M)
{
	if(N>M)
	{
		int s=N,r;
		while(N>=M)
		{
			s+=N/M;
			r=N%M;
			N/=M;
			N+=r;
		}
		return s;
	}
	else if(N==M)
		return N+1;
	else
		return N;
}
int main()
{
	int N,M;
	int i,j;
	cin>>N>>M;
	cout<<ans(N,M)<<endl;
//	for(i=1;i<=100;i++)
//	{
//		for(j=2;j<=100;j++)
//		{
//			if(ans(i,j)!=ans2(i,j))
//				cout<<i<<" "<<j<<endl;
//		}
//	}
	
}
