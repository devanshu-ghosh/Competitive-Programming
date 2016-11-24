#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if(N&1)
		cout<<"-1\n";
	else
	{
		for(int i=2;i<=N;i=i+2)
		{
			cout<<i<<" "<<i-1<<" ";
		}
		cout<<endl;
	}
}
