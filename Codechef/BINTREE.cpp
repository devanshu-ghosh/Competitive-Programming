#include<iostream>
using namespace std;
int power(int N)
{
	if((N&(N-1))==0)
		return N;
	else
	{
		int p=1;
		while(p<N)
		p=p<<1;
		return p>>1;
	}	
}
void path_length(int i,int j,int &p)
{
	//p is a reference to path length
	//i and j are on the same level
	int count=0;
	while(i!=j)
	{
		i/=2;
		j/=2;
		count++;
	}
	p=p+2*count;	
}
int main()
{
	int N,i,j;
	cin>>N;
	while(N--)
	{
		cin>>i>>j;
		int p=0;
		if(i==j)
		{
			p=0;//path length zero
		}
		else//i not equal to j
		{
			int max=(i>j)?i:j;
			int min=i+j-max;
			if(power(max)!=power(min))
			{
				//take them to same level
				int min_level=power(min);
				while(power(max)!=min_level)
				{
					max/=2;
					p++;
				}	
				path_length(max,min,p);
			}
			else
			{
				//they are already on the same level
				//very easy to find the answer
				path_length(i,j,p);
			}
		}
		cout<<p<<endl;
	}
}

