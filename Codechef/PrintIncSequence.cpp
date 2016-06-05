#include<iostream>
using namespace std;
void print(int N,int i)
{
	if(N==0) return;
	else if(N<i) cout<<N<<" ";
	else
	{
		cout<<i<<" ";
		print(N-i,i);
	}
}
int main()
{
	int i,N=6;
	for(i=1;i<=N;i++)
	{
		print(N,i);
		cout<<endl;
	}
	return 0;
}
