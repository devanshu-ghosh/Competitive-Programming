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
	string s;
	cin>>s;
	//preprocess string
	vector<int> v(s.length(),0);
	for(int i=0;i<s.length()-1;i++){
		if(s[i]==s[i+1])
			v[i+1]= v[i]+1;
		else
			v[i+1]=v[i];
	}
	int M;
	cin>>M;
	int l,r;
	while(M--){
		cin>>l>>r;
		l--;r--;
		cout<<v[r]-v[l]<<endl;
	}
	return 0;
}

