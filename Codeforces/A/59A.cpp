#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int up=0,low=0;
	for(int i=0;i<s.length();i++)
	{
		if(islower(s[i]))
			low++;
		else
			up++;
	}
	if(low>=up)
	{
		//take it to low
		for(int i=0;i<s.length();i++)
		{
			if(isupper(s[i]))
				s[i]=tolower(char(s[i]));
		}	
	}
	else
	{
		//take it to up
		for(int i=0;i<s.length();i++)
		{
			if(islower(s[i]))
				s[i]=toupper(char(s[i]));
		}	
	}
	cout<<s<<endl;
}
