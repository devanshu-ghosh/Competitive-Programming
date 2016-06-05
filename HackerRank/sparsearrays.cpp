#include<iostream>
#include<map>
using namespace std;
int main()
{
	int N,Q;
	cin>>N;
	map< string , int > m;
	map< string , int >::iterator it;
	string s;
	while(N--)
	{
		cin>>s;
		m[s]++;
	}
	cin>>Q;
	while(Q--)
	{
		cin>>s;
		if(m.find(s)!=m.end())
		{
			cout<<m[s]<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}
