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
int sqrtA(int N)
{
	int i=1;
	while(i<(N/i))
		i++;
	if(i>(N/i))
		return i-1;
	else
		return i;
}
int sqrtB(int N)
{
	int i=0,s=0,b=1;
	while(s<N)
	{
		s+=b;
		b=b+2;
		i++;
	}
	if(s>N)
		return i-1;
	return i;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N;
	cin>>N;
	cout<<sqrtB(N);
//	for(int i=1000000;i<10000000;i++)
//	{
//		double s = sqrt(i);
//		int ss = int(s);
//		int so = sqrtA(i);
//		if(so != ss)
//			cout<<i<<endl;
//	}
}

