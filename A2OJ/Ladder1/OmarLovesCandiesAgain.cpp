#include<iostream>
using namespace std;
int HASH[26];
void initHash()
{
	for(int i=0;i<26;i++)
		HASH[i]=0;
}
int main()
{
	int T,i;
	string s;
	cin>>T;
	while(T--)
	{
		cin>>s;
		int len=s.length();
		for(i=0;i<len;i++)
			HASH[(s.at(i)-'a')]++;
		int max=HASH[0];
		char c='a';
		for(i=1;i<26;i++)
		{
			if(HASH[i]>max)
			{
				max=HASH[i];
				c=char(i+'a');
			}
			HASH[i]=0;//reinitializing hand by hand
		}
		HASH[0]=0;//reinitialize
		cout<<max<<" "<<c<<endl;
		s="";
	}
}
