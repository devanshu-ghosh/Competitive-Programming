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
int N,M,C;
int count(int a,int b)
{
	if(a==b)//taken care of squares
		return 0;
	int c=0;
	if(a<=N && b<=M)
		c++;
	if(b<=N && a<=M)
		c++;
	return c;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int T;
	cin>>T;
	while(T--)
	{
		cin>>N>>M>>C;
		int x = sqrt(C);
		int sum=0;
		for(int i=1;i<=x;i++)
		{
			if(C%i==0)
				sum+= count(i,C/i);
		}
		cout<<sum<<endl;
	}
	return 0;
}

