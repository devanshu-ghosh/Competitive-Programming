#include<iostream>
using namespace std;
string N;
int two()
{
	int ones=N.at(N.length()-1)-'0';
	if(ones%2==0)
		return 1;
	else
		return 0;
}
int three()
{
	int sum=0;
	for(int i=0;i<N.length();i++)
	{
		sum+=(N.at(i)-'0');
	}
	return !(sum%3);
}
int four()
{
	int ones=N.at(N.length()-1)-'0';
	int tens = N.at(N.length()-2)-'0';
	int flag=0;
	if(tens%2==0)
	{
		//ones must be 0 , 4 , 8
		if(ones==0 || ones==4 || ones==8 )
			flag=1;
	}
	else
	{
		//ones must be 2 or 6
		if(ones==2 || ones==6)
			flag=1;
	}
	return flag;
}
int five()
{
	int ones=N.at(N.length()-1)-'0';
	if(ones==0 || ones==5)
		return 1;
	else return 0;
}
int six()
{
	return ( two() && three() );
}
int seven()
{
	
}
int eight()
{
	return ( two() && four() );
}
int nine()
{
	int sum=0;
	for(int i=0;i<N.length();i++)
	{
		sum+=(N.at(i)-'0');
	}
	return !(sum%9);
}
int ten()
{
	int ones=N.at(N.length()-1)-'0';
	return (ones==0);
}

int main()
{
	int T,K;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		int flag=0;
		switch(K)
		{
			case 1:flag=1;
					break;
			case 2:flag=two();break;
			case 3:flag=three();break;
			case 4:flag=four();break;
			case 5:flag=five();break;
			case 6:flag=six();break;
			case 7:flag=seven();break;
			case 8:flag=eight();break;
			case 9:flag=nine();break;
			case 10:flag=ten();break;
		}
		if(flag==1)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
		N="";	
	}
}
