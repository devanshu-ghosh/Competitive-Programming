#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	int flag=0,c=0,i;
	char prev;
	int l=s.length();
	//algo
	prev=s[0];c=1;
	for(i=1;i<l;i++)
	{
		if(prev==s[i]) c++;
		else
		{
			prev=s[i];c=1;
		}
		if(c==7)
		{
			flag=1;
			break;
		}
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}
