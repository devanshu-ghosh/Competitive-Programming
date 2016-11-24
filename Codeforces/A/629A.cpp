#include<iostream>
using namespace std;

long long int fun(int x)
{
	return (x*(x-1))/2;
}	
int main()
{
	int N;
	int i,j;
	cin>>N;
	char ch;
	int col[N];
	int row[N];
	for(i=0;i<N;i++)
	{
		row[i]=0;
		col[i]=0;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>ch;
			if(ch=='C')
			{
				row[i]++;
				col[j]++;
			}
		}
	}
	long long int count=0;
	for(i=0;i<N;i++)
	{
		count+=fun(row[i]);
		count+=fun(col[i]);
	}
	cout<<count<<endl;
}
