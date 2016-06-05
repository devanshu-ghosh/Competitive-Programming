#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<string>
using namespace std;
map<string, set< int > > M;
string A[25];
map<string,set< int > >::iterator it;
int main()
{
	int N,T,i=0,j;
	cin>>T;
	while(T--)
	{
		M.clear();
		cin>>N;
		i=0;
		while(i<N)
		{
			cin>>A[i];i++;
		}
		//now the algo
		for(int k=0;k<N;k++)
		{
			//get all substring
			int L=A[k].length();
			for (i = 0; i < L; ++i)
		      for (j = 1; (j+i) <=L; ++j)
		      	M[A[k].substr(i,j)].insert(k);
		}
		int l=0;
		string ans;
		for(it=M.begin();it!=M.end();it++)
		{
			if(it->second.size()==N)
			{
				//possible canditate
				string s=it->first;
				int len=s.length();
				if(len>l)
				{
					l=len;
					ans=s;
				}
			}
		}
		cout<<ans<<endl;
	}
}
