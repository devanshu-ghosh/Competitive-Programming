#include<vector>
#include<algorithm>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	vector<int> vi;
	vector<string> vis;
	string t;
	int N,temp;
	scanf("%d",&N);
	/*for(int i=0;i<N;i++)
	{
		scanf("%d",&temp);
		vi.push_back(temp);
	}
	vector<int>::iterator itr1 = vi.begin(),itr2=vi.end();
	sort(itr1,itr2);
	for(itr1=vi.begin();itr1!=vi.end();itr1++)
		printf("%d ",*itr1);*/
	printf("STRINGS \n");
	for(int i=0;i<N;i++)
	{
		cin>>t;
		vis.push_back(t);
	}
	vector<string>::iterator itr3 = vis.begin(),itr4=vis.end();
	sort(itr3,itr4);
	for(itr3=vis.begin();itr3!=vis.end();itr3++)
		cout<<*itr3<<" ";
	
}
