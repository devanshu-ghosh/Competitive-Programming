#include<iostream>
using namespace std;
int main()
{
	int T,N,X,Y,f,l;
	string ans="";
	cin>>T;
	while(T--)
	{
		cin>>N>>X>>Y;
		cin>>f;
		for(int i=1;i<N;i++)
				cin>>l;
		if(X==f && Y==l)	cout<<"BOTH\n";
		else if(X==f && Y!=l)	cout<<"EASY\n";
		else if(X!=f && Y==l)	cout<<"HARD\n";
		else	cout<<"OKAY\n";
	}
	return 0;
}
