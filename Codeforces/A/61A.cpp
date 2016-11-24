#include<iostream>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int i,l=s.length();
	for(i=0;i<l;i++)
	{
		if(s[i]==t[i])
			cout<<"0";
		else
			cout<<"1";
	}
	cout<<endl;
}
