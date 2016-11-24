#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	string s,ans="";
	cin>>s;
	int i,l=s.length();
	char ch;
	for(i=0;i<l;i++)
	{
		ch=s.at(i);
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
		|| ch=='y' || ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'|| ch=='Y' )
		{
			//skip it
		}
		else if(isalpha(ch))
		{
			if(isupper(ch)) ch=tolower(ch);
			ans+=".";
			ans.push_back(ch);
		}
		else
		{
			ans+=ch;
		}
	}
	cout<<ans<<endl;
	ans="";
}
