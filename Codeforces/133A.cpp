#include<bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	cin>>p;
	int flag=0;
	for(int i=0;i<p.length();i++)
	{
		if(p[i]=='H' || p[i]=='9' || p[i]=='Q')
		{
			flag=1;
			break;
		}
	}
	if(flag==1)	cout<<"YES\n";
	else	cout<<"NO\n";
}
