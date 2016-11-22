#include <iostream>
#include <string>
#include <algorithm>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int count(int N,int M)
{
	string n1 = to_string(N);
	string n2 = to_string(M);
	cout<<n1<<endl;
	cout<<n2<<endl;
	int len1 = n1.length();
	int len2 = n2.length();
	//Reverse both the strings
	reverse(n1.begin(),n1.end());
	reverse(n2.begin(),n2.end());
	if(len1 != len2)
	{
		if(n1.length() < n2.length())
			n1.push_back('0');
		else
			n2.push_back('0');
	}
	cout<<n1<<" "<<n2;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N,M;
	cin>>N>>M;
	count(N,M);
	return 0;
}

