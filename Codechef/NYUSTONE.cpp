#include<iostream>
using namespace std;
int main()
{
	int N,a_min,a_max,b_min,b_max,i=1;
	int T;
	cin>>T;
	while(T--)
	{
		cin>>N>>a_min>>a_max>>b_min>>b_max;
		while(1)
		{
			if(i==1)
			{
				i=0;//to alternate
				if((N-a_max)<b_min)
					N-=a_max;
				else if((N-a_min)>b_max)
					N-=a_min;
				else
				{
					cout<<"Bob"<<endl;
					break;
				}	
			}
			else
			{
				i=1;//to alternate
				if((N-b_max)<a_min)
					N-=b_max;
				else if((N-b_min)>a_max)
					N-=b_min;
				else
				{
					cout<<"Alice"<<endl;
					break;
				}	
			}
		}
		
	}
	return 0;
}
