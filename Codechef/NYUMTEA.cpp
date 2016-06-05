#include<iostream>
#include<string>
using namespace std;
int main()
{
	int T,i,len,c=0;;
	cin>>T;
	string s;
	int l=0,m=0;
	long int ans;
	while(T--)
	{
		cin>>s;
		len=s.length();
		for(i=0;i<len;i++)
		{
			if(i%7==6) continue;
			else if(s.at(i)=='M') m++;
			else l++;
		}
		/*for(i=0;i<len;i++)
		{
				if(s.at(i)=='M') m++;
				else l++;
		}
		for(i=6;i<len;i=i+6)
		{
				if(s.at(i)=='M') m--;
				else l--;
		}*/
		ans=(3*m)+(4*l);
		cout<<ans<<endl;
		l=0;m=0;ans=0;
	}
	return 0;
}
