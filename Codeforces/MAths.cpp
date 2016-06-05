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
	int N = 17;
	//x=1 , x=2 , x=3 p = 3
	int p=3;
	int i=1;
	for(int x = 4 ; x<=17;x++)
	{
		if(x%3==1);//we SA
		if(x%3==2);//we C
		if(x%3==0)//we paste
		{
			p = p + p;
			cout<<p<<endl;
		}
		
	}
	return 0;
}

