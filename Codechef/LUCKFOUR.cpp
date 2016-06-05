#include<iostream>
using namespace std;
int main()
{
	int T,count;
	int i,l;
	cin>>T;
	string s;
	while(T--)
	{
		cin>>s;
		l=s.length();
		count=0;
		for(i=0;i<l;i++)
			if(s[i]=='4')
				count++;
		cout<<count<<endl;
	}
}
