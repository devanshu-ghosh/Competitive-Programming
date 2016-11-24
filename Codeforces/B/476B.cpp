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
#include <iomanip>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int scoreNeeded=0;
int countSpace(int K , int ans)
{
	if(K==0)
	{
		if(ans==scoreNeeded)
			return 1;
		return 0;
	}
	return countSpace(K-1,ans+1)+countSpace(K-1,ans-1);
}
int main()
{
	ios_base::sync_with_stdio(0);
	string s,p;
	cin>>s>>p;
	int score=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+')
			score++;
		else
			score--;
	}
	int count=0,scoreP=0;
	for(int i=0;i<s.size();i++)
	{
		if(p[i]=='+')
			scoreP++;
		else if(p[i]=='-')
			scoreP--;
		else
			count++;
	}
	//cout<<score<<endl;
	//cout<<scoreP<<endl;
	//cout<<count<<endl;
	scoreNeeded = score - scoreP;
	double prob=0.0;
	if(count==0)
	{
		if(scoreNeeded==0)
		{
			prob=1.0;
		}
		else
			prob=0.0;
	}
	else
	{
		int c = countSpace(count,0);
		prob = (c*1.0)/(pow(2,count));
	}
	cout.setf(ios::fixed);
	cout<<setprecision(12)<<prob<<endl;
	return 0;
}

