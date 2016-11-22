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
	int N,K;
	cin>>N>>K;
	int temp = N & (1<<(K-1));
	if(temp == 0)
	{
		//means we have 0 bit at K pos
		//we do nothing
		cout<<N;
	}
	else
	{
		//we have 1 pos
		//now we have to reverse the bit here
		N = N & (~(1<<(K-1)));
		cout<<N<<endl; 
	}
	return 0;
}

