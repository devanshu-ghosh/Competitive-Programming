#include<iostream>
#include<string>
#define MAX 900
using namespace std;
int HASH[MAX];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int len=s.length();
		int i;
		int count=0;
		for(i=0;i<(len-1);i++)
		{
			int val=int(s.at(i)-'A')+int((s.at(i+1)-'A')*31);
			//cout<<val<<endl;
			if(HASH[val]==0)
			{
				HASH[val]=1;
				count++;
			}
		}
		cout<<count<<endl;
		//reinitialize it
		for(i=0;i<MAX;i++)	HASH[i]=0;
	}
}
