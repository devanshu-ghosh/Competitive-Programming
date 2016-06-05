#include<iostream>
using namespace std;
int main()
{
	int hh,mm,a;
	string s;
	cin>>s;
	cin>>a;
	mm=(s[4]-'0')+10*(s[3]-'0');
	hh=(s[1]-'0')+10*(s[0]-'0');
	//cout<<hh<<" "<<mm<<endl;
	hh+=a/60;
	mm+=a%60;
	if(mm>59)
	{
		hh+=mm/60;
		mm=mm%60;
	}
	if(hh>23)
	{
		hh=hh%24;
	}
	//printing the time
	if(hh<10)
		cout<<"0"<<hh;
	else
		cout<<hh;
	cout<<":";
	if(mm<10)
		cout<<"0"<<mm;
	else
		cout<<mm;
}
