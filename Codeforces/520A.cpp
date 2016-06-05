#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<char> s;
	int N;
	cin>>N;
	string t;
	cin>>t;
	if(N<26)
	{
		cout<<"NO\n";
		return 0;
	}
	int i,l=t.length();
	for(i=0;i<l;i++)
	{
		if(isupper(t[i]))
			s.insert(char(tolower(t[i])));
		else
			s.insert(t[i]);
	}
	if(s.size()==26)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
