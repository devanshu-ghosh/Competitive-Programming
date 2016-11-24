#include<iostream>
using namespace std;
int main()
{
	int N,a,b,c,count=0;
	cin>>N;
	while(N--)
	{
		cin>>a>>b>>c;
		if((a+b+c)>=2) count++;
	}
	cout<<count<<endl;
}
