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
int main()
{
	ios_base::sync_with_stdio(0);
	queue<string> q;
	string s;
	q.push("0");
	q.push("1");
	int N;
	cin>>N;
	int count=0;
	while(!q.empty())
	{
		s = q.front();q.pop();
		int l = s.length();
		if(l==N)
		{
			if(s.find("11011")!= -1)
				count++;
		}
		else
		{
			q.push(s+"0");
			q.push(s+"1");
		}
	}
	cout<<count<<endl;
	return 0;
}

