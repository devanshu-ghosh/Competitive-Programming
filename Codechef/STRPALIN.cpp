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
int H[26];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	string A,B;
	int T;
	cin>>T;
	while(T--)
	{
		cin>>A>>B;
		for(int i=0;i<A.length();i++)
		{
			H[A[i]-'a']++;
		}
		int flag=0;
		for(int i=0;i<B.length();i++)
		{
			if(H[B[i]-'a']!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		for(int i=0;i<26;i++)
			H[i]=0;
	}
	return 0;
}

