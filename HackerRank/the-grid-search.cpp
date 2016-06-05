#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector< string > G,P;
	int T,R,C,r,c;
	cin>>T;
	string s;
	while(T--)
	{
		cin>>R>>C;
		while(R--)
		{
			cin>>s;
			G.push_back(s);
		}
		cin>>r>>c;
		while(r--)
		{
			cin>>s;
			P.push_back(s);
		}
		//searching algo
		int j=0,flag=1;
		for(int i=0;i<P.size();i++)
		{
			flag=(G[j]).find(P[i]);
		}
	}
}
