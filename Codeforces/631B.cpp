#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
struct node
{
	int index,color;
};
node row[5005];
node col[5005];
int main()
{
	ios_base::sync_with_stdio(0);
	int N,M,K,type,l,color;
	cin>>N>>M>>K;
	for(int i=0;i<K;i++)
	{
		cin>>type>>l>>color;
		l--;
		if(type==1)
		{
			row[l].color=color;
			row[l].index=i;
		}
		else
		{
			col[l].color=color;
			col[l].index=i;
		}
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(row[i].color==0 && col[j].color==0)
				cout<<"0 ";
			else if(row[i].color!=0 && col[j].color!=0)
			{
				if(row[i].index>col[j].index)
					cout<<row[i].color<<" ";
				else
					cout<<col[j].color<<" ";
			}
			else
			{
				if(row[i].color!=0)
					cout<<row[i].color<<" ";
				else
					cout<<col[j].color<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

