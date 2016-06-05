#include<iostream>
using namespace std;
int main()
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
		cin>>N>>M;
		if(N>M)
		{
			cout<<"Bipin "<<N-M<<endl;
		}
		else if(N<M)
		{
			cout<<"Balaji "<<M-N<<endl;
		}
		else
		{
			cout<<"No Winner\n";
		}
	}
}
