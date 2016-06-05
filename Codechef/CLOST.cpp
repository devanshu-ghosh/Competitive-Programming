#include<iostream>
#include<stack>
using namespace std;
int Query[2005];
int main()
{
	int T,N,K,i,x,y;
	cin>>T;
	stack<int> s;
	//scanf("%d",&T);
	while(T--)
	{
		cin>>N>>K;
		//scanf("%d%d",&N,&K);
		for(i=0;i<K;i++)
		{
			cin>>x>>y;
			//scanf("%d%d",&x,&y);
			Query[x]++;
			Query[y+1]--;
		}
		for(i=1;i<N;i++)
		{
			Query[i]+=Query[i-1];
		}
		//algo
		for(i=0;i<N;i++)
		{
			if(s.empty())
			{
				if(Query[i]==0) cout<<"(";
				else
				{
					s.push(Query[i]);cout<<"(";
				}
			}
			else//not empty
			{
				if(Query[i]==0) cout<<"(";
				else
				{
					if(s.top()==Query[i])
					{
						s.pop();cout<<")";
					}
					else
					{
						s.push(Query[i]);cout<<"(";
					}
				}
			}
		}
		//reinitialize
		for(i=0;i<=N;i++) Query[i]=0;
		cout<<endl;
	}
	return 0;
}
