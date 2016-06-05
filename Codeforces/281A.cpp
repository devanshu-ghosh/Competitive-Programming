#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(islower(s[0])) s[0]=char(toupper(s[0]));
	cout<<s;
}
