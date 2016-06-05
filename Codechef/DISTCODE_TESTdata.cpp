#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;
char A[26];
int main()
{
	srand(time(NULL));
	char c='A';
	for(int i=0;i<26;i++)
		A[i]=c++;
	int T;
	T=100;
	cout<<T<<endl;
	while(T--)
	{
		int len=rand()%20;
		if(len==0 || len==1) len=5;
		string s;
		while(len--)
		{
			string temp;
			temp.push_back(A[rand()%26]);
			s=s+temp;
		}
		cout<<s<<endl;
	}
}
