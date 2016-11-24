#include<iostream>
using namespace std;
int main()
{
	int N;
	string s;
	cin>>N;
	while(N--)
	{
		cin>>s;
		int len=s.length();
		if(len>10)
		{
			cout<<s.at(0)<<len-2<<s.at(len-1)<<endl;
		}
		else
			cout<<s<<endl;
		s="";
	}
}
