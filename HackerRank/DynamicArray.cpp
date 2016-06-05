#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N,Q,type,x,y;
	long long int lastans=0;
	int sequence_num=0,index=0;
	cin>>N>>Q;
	vector< vector<int> > v;
	v.resize(N, vector<int>());
	while(Q--)
	{
		cin>>type>>x>>y;
		if(type==1)
		{
			sequence_num = (x^lastans) % N;
			v[sequence_num].push_back(y);
		}
		else
		{
			sequence_num = (x^lastans) % N;
			index = (y % v[sequence_num].size());
			lastans=v[sequence_num][index];
			cout<<lastans<<endl;
		}
	}
}
