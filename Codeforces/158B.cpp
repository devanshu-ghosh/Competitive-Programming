#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a=0,b=0,c=0,d=0,temp,i;
	for(i=1;i<=N;i++)
	{
		cin>>temp;
		if(temp==1) a++;
		else if(temp==2) b++;
		else if(temp==3) c++;
		else d++;
	}
	int count=d;//4
	//2
	int flag=0;
	if(b==1)	count++;
	else
	{
		if(b&1)
			flag=1;	//means 1 b is waiting
		count+=(b/2);
	}
	
	//1 and 3 and 2
	if(a>c)
	{
		count+=c;
		a=a-c;
		if(flag==1)
		{
			count++;
			a--;
			flag=0;
		}
		count+=(a/4 + a%4);
		//count+=a;
	}
	else if(a==c)
	{
		count+=a;
	}
	else//a<c
	{
		count+=a;
		c=c-a;
		count+=c;
	}
	cout<<count<<endl;
}
	
	
