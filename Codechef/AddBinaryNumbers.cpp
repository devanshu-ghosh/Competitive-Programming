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
	string n,m;
	cin>>n>>m;
	//reverse both
	cout<<endl;
	reverse(n.begin(),n.end());
	reverse(m.begin(),m.end());
	if(n.length()>m.length())
	{
		while(m.length()!=n.length())
			m.push_back('0');
	}
	else if(m.length()>n.length())
	{
		while(n.length()!=m.length())
			n.push_back('0');
	}
	//cout<<"Reversed and Same length String\n";
	cout<<n<<endl;
	cout<<m<<endl;
	//now we have reversed stuff now the time to add
	//we add using bit additions and that is very very decent
	int c=0;
	string ans;
	for(int i=0;i<n.length();i++)
	{
		int fb = n[i]-'0';
		int sb = m[i]-'0';
		int sum = fb^sb^c;
		ans.push_back(char(sum+'0'));
		c = (fb&sb) | (fb&c) | (sb&c) ;
	}
	if(c)
		ans.push_back(char(1+'0'));	
	reverse(ans.begin(),ans.end());
	//print stuff
	cout<<ans<<endl;
	
	return 0;
}

