#include<iostream>
using namespace std;
int main()
{
	int N,temp=0,prev=0,len=1,max=0,flag=0;
	cin>>N;
	cin>>prev;
	for(int i=1;i<N;i++)
	{
		cin>>temp;
		if(temp<prev)
		{
			flag=1;
			if(len>max)
				max=len;
			len=1;
		}
		else
			len++;
		prev=temp;
	}
	if(len>max)
		max=len;
	if(flag==0)
		cout<<N<<endl;
	else
		cout<<max<<endl;
}
