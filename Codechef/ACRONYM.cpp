#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	//cout<<s<<endl;
	int count=0,flag=1;
	s=s+" ";
	string word="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=' ')
		{
			word.push_back(s[i]);
			if(s[i]>='a' && s[i]<='z')
			{
				flag=0;
			}	
		}
		else
		{
			if(word.length()>1 && flag==1)
				count++;
			flag=1;
			word="";
		}	
	}
	cout<<count<<endl;
}
