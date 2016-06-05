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
int A[26];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		A[s[i]-'a']++;
	}
	if(A['i'-'a']>=1 && A['l'-'a']>=1 && A['v'-'a']>=1 && A['e'-'a']>=1 && A['y'-'a']>=1 && A['u'-'a']>=1)
	{
		if(A['o'-'a']>=2)
		{
			cout<<"happy"<<endl;
		}
		else
			cout<<"sad"<<endl;
	}
	else
		cout<<"sad"<<endl;
	return 0;
}

