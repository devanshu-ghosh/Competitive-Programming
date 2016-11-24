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
	int N;
	cin>>N;
	ll* A = new ll[N];
	ll* B = new ll[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{
		cin>>B[i];
	}
	int l=0,r=0;
	ll ansA=A[0],ansB=B[0],maxA=0,ans=0;
	if(N==1)
	{
		cout<<ansA+ansB<<endl;
		return 0;
	}
	int lpos=0,rpos=0;
	for(l=1;l<N;l++)
	{
		for(r=l;r<N;r++)
		{
			ansA = ansA | A[r];
			ansB = ansB | B[r];
			ans = ansA + ansB;
			if(ans>maxA)
			{
				maxA=ans;
			}
				
		}
	}
	cout<<maxA<<endl;
	//cout<<lpos<<" "<<rpos<<endl;
	return 0;
}

