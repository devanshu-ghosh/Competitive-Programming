#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	int T;
	cin>>T;
	set<string> sp;
	while(T--)
	{
		string s;
		cin>>s;
		int len=s.length();
		int i;
		sp.clear();
		for(i=0;i<(len-1);i++)
		{
			string temp=s.substr(i,2);
			sp.insert(temp);
		}
		cout<<sp.size()<<endl;
	}
}
