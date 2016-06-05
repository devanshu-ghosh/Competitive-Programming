#include<iostream>
using namespace std;
int HASH[100005];
int main()
{
	int N,temp;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		HASH[temp]=1;
	}
	for(int i=0;i<=N;i++)
	{
		if(HASH[i]==0)
			cout<<i<<" ";
	}
	cout<<endl;
	
}
