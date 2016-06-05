#include<iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;
 
inline void read(int *a)
{
	char c=0;
	*a=0;
	while((c=fgetc_unlocked(stdin)) > 33)
	{
		*a=*a * 10 +c - '0';
	}
}
//yes cases 
//0 0 3 2 , 0 0 1 6 , 0 0 2 4
//what was wrong ki i was not checking the condition for every step .
//always try to check if the conditon are met for all points and not only end points
using namespace std;
int main()
{
	int T,K,i,flag=1,temp=0;
	long long int stem=1;
	//cin>>T;
	read(&T);
	while(T--)
	{
		stem=1;flag=1;
		read(&K);
		for(i=0;i<K;i++)
		{
			read(&temp);
			if(stem<temp)
			{
				flag=0;
				break;
			}
			else
			stem=2*(stem-temp);
		}
		if(flag==0) cout<<"No\n";
		else
		{
			if(stem==0) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
} 
