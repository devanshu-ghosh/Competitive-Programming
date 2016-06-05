#include<iostream>
using namespace std;
int main()
{
	int N,M,j;
	cin>>N>>M;
	for(int i=1;i<=N;i++)
	{
		if(i&1)
		{
			for(j=1;j<=M;j++)
				cout<<"#";
			cout<<"\n";
		}
		else
		{
			int k=i/2;
			if(k&1)
			{
				//......#
				for(j=1;j<M;j++)
					cout<<".";
				cout<<"#\n";
			}
			else
			{
				//#......
				cout<<"#";
				for(j=2;j<=M;j++)
					cout<<".";
				cout<<"\n";
			}
		}
	}
}
