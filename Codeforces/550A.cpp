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
	int count=0,flag=0,prev=0,ab=0,ba=0;
	for(int i=0;i<=s.length()-1;i++){
		if(prev==0){
			if(s[i]=='A' && s[i+1]=='B' && ab==0){
				count++;
				prev=1;
				ab=1;
			}
			else if(s[i]=='B' && s[i+1]=='A' && ba==0){
				count++;
				prev=1;
				ba=1;
			}
		}
		else
			prev=0;	
			
		if(count>=2){
			flag=1;
			break;
		}		
	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

