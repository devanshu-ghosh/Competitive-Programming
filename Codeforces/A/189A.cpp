#include<iostream>
using namespace std;
int main()
{
	int N,A,B,C;
	cin>>N>>A>>B>>C;
	int i,j,temp,max=0;
	for(i=0;i<4000;i++)
	{
		for(j=0;j<4000;j++)
		{
			temp = N - A*i - B*j;
			if(temp<C)
				break;
			if(temp%C==0)
			{
				//a valid soltion
				int sum = temp/C + i+j;
				if(sum>max)
					max=sum;
			}
		}
	}
	cout<<max<<endl;
}
