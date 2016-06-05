#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,c=0,l=0;
	char prev_c;
	string s;
	cin>>N;
	cin>>s;
	prev_c=s[0];
	l=s.length();
	if(l==1)
	{
		cout<<"0\n";
		return 0;
	}
	else if(l==2)
	{
		if(s[1]==prev_c)
			cout<<"1\n";
		else
			cout<<"0\n";
		return 0;
	}
	for(int i=1;i<l;i++)
	{
		if(s[i]==prev_c)
			c++;
		else
			prev_c=s[i];
	}
	cout<<c<<endl;
}
