#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int T,N,D;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		N=s.length();
		cin>>D;
		string x=s.substr(0,D-1);
		string y=s.substr(D-1);
		if((N-D+1)&1)
			reverse(x.begin(),x.end());
		cout<<y+x<<endl;
	}
	return 0;
}
