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
#define MAX 44721
int A[MAX];
int main()
{
	ios_base::sync_with_stdio(0);
	//precompute H values
	for(int i=1;i<MAX;i++)
	{
		A[i]=A[i-1]+i;
	}
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		int i = lower_bound(A,A+MAX,N) - A;
		if(A[i]==N)
			cout<<i<<endl;
		else
			cout<<i-1<<endl;
	}
	return 0;
}

