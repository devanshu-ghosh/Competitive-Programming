#include<iostream>
#include<algorithm>
int B[1000005];
using namespace std;
int main()
{
	int T,N,temp;
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>temp;
			B[temp]++;
		}
		long long int count=0;
		for(int i=1;i<1000001;i++)
		{
			if(B[i]>1)
			{
				count+=(1LL*B[i]*(B[i]-1));
			}
			B[i]=0;
		}
		cout<<count<<endl;
	}
}
