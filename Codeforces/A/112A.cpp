#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,p;
	cin>>s;
	cin>>p;
	int l=s.length(),flag=0;
	char ss,pp;
	for(int i=0;i<l;i++)
	{
		ss=tolower(s[i]);
		pp=tolower(p[i]);
		if(ss!=pp)
		{
			if(ss<pp)
			{
				flag=-1;
				break;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	cout<<flag<<endl;
}
