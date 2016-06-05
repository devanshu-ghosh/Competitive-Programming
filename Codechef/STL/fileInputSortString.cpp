//file input of strings
//sorting them
//then finding their score
#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s;
	vector<string> vis;
	ifstream file;
	file.open("names.txt");
	ofstream save("namesSorted.txt");
	if(!file) cout<<"error"<<endl;
	//ifstream infile("D:\name.txt");
	while(file.good())
	{
		file>>s;
		vis.push_back(s);
	}
	vector<string>::iterator itr1=vis.begin(),itr2=vis.end();
	sort(itr1,itr2);
	//printing all the data
	int t=1;
	long long int sum=0,sumTemp=0;
	for(itr1=vis.begin();itr1!=vis.end();itr1++)
	{
		//calculate the score of that name
		s=*itr1;
		int len=s.length();
		for(int i=0;i<len;i++)
		{
			char c=s.at(i);
			sumTemp+=(int(c)-64);
		}
		save<<*itr1<<endl;
		sumTemp*=t;
		sum+=sumTemp;
			if(t==938) cout<<sumTemp<<endl;
		sumTemp=0;
	
		t++;
	}
	printf("%lld ",sum);
	cout<<sum;
		
}
