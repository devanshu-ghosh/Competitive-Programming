#include<iostream>
#include<set>
using namespace std;
string words[105];
set<string> se;
set<string>::iterator its;
int main()
{
	int T,N,K,L;
	int i;
	string s;
	cin>>T;
	while(T--)
	{
		se.clear();
		cin>>N>>K;
		//N words
		for(i=0;i<N;i++)
			cin>>words[i];
		for(i=0;i<K;i++)
		{
			cin>>L;
			for(int j=0;j<L;j++)
			{
				cin>>s;
				se.insert(s);
				//insert this s into set
			}
				
		}
		//now we go through the set
		for(i=0;i<N;i++)
		{
			string st=words[i];
			its=se.find(st);
			if(its!=se.end())
				cout<<"YES ";
			else cout<<"NO ";
		}
		cout<<endl;
	}
}
