#include<iostream>
using namespace std;
int CC[105];
int A[101][101];
int T,C,V;
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>C>>V;
		int i,j;
		for(i=0;i<V;i++)
		{
			cin>>A[i][0];
			CC[A[i][0]]++;//election 1
			for(j=1;j<C;j++)
				cin>>A[i][j];
		}
		//find 2 max in CC array
		int max=-1,max2=-1,w1=0,w2=0;
		for(i=1;i<=C;i++)
		{
			if(CC[i]>max)
			{
				max=CC[i];
				w1=i;
			}
		}
		for(i=1;i<=C;i++)
		{
			if(i!=w1)
			{
				if(CC[i]>max2)
				{
					max2=CC[i];
					w2=i;
				}
			}	
		}
		for(i=0;i<105;i++) CC[i]=0;
		if(max>(V/2))
		{
			cout<<w1<<" 1"<<endl;
		}
		else//2nd election
		{
			max=0;max2=0;
			int v;
			for(i=0;i<V;i++)
			{
				for(j=0;j<C;j++)
				{
					v=A[i][j];
					if(v==w1 || v==w2)
						break;
				}
				if(v==w1) max++;
				else max2++;
			}
			if(max>max2)
			{
				cout<<w1<<" 2"<<endl;
			}
			else
			{
				cout<<w2<<" 2"<<endl;
			}
		}//else
	}//while
}//end

