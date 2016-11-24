#include<iostream>
#include<set>
#include<cctype>
using namespace std;
int main()
{
	set<char> s;
	string t;
	getline(cin,t);
	int i,l=t.length();
	for(i=0;i<l;i++)
	{
		if(t[i]>='a' && t[i]<='z')
			s.insert(t[i]);
	}
	cout<<s.size()<<endl;
}
