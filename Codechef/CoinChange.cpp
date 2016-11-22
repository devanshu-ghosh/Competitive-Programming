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
void count(vector<int> set ,int N,int index,vector<int> ans)
{
	if(N==0)
	{
		for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}	
	else if(N<0)
	{
		//do nothing just return
	}
	else
	{
		for(int i=index;i<set.size();i++)
		{
			ans.push_back(set[i]);
			count(set,N-set[i],i,ans);
			ans.pop_back();
		}	
	}
}
vector<int> v;
int count(int N,int index)
{
	if(N==0)
		return 1;
	else if(N<0)
		return 0;
	else
	{
		int sum=0;
		for(int i=index;i<v.size();i++)
			sum+=count(N-v[i],i);
		return sum;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	v.clear();
	v.push_back(2);v.push_back(3);v.push_back(5);v.push_back(6);
	cout<<count(10,0);
//	vector<int> v;
//	v.clear();
//	v.push_back(2);v.push_back(3);v.push_back(5);v.push_back(6);
//	vector<int> ans;
//	ans.clear();
//	count(v,10,0,ans);
//	return 0;
}

