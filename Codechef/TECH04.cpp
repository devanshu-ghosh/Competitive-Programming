#include<iostream>
#include<string>
#include<algorithm>
//check anagram
using namespace std;
int main()
{
	string s1,s2;
	int T,flag=0;
	cin>>T;
	while(T--)
	{
		cin>>s1;
		cin>>s2;
		int len1=s1.length();
		int len2=s2.length();
		if(len1!=len2) flag=0;
		else
		{
			sort(s1.begin(),s1.end());
			sort(s2.begin(),s2.end());
			if(!(s1.compare(s2))) flag=1;
			else flag=0;
		}
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		flag=0;
	}
	return 0;
}

