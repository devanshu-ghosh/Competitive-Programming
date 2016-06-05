//generate all substring of a string
//making it distinct using stl library map
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	cout<<"Enter the string"<<endl;
	string s;
	cin>>s;
	int l,i,j;
	int len=s.length();
	for(l=len;l>=1;l--)
	{
		for(i=0;(i+l)<=(len);i++)
		{
			cout<<s.substr(i,i+l-1);
			/*for(j=i;j<(i+l);j++)
			{
				cout<<s.at(j);
			}*/
			cout<<endl;
		}
	}

}
