#include<iostream>
#include<set>
using namespace std;
int A[102][102];
int main()
{
	int T,N,M,i,j;
	cin>>T;
	set<int> s;
	while(T--)
	{
		cin>>N>>M;
		for(i=1;i<=N;i++)
			for(j=1;j<=M;j++)
				cin>>A[i][j];
		//we reinitialize with something
		//4 loops
		for(i=0;i<=(M+1);i++) A[0][i]=-1;
		for(i=0;i<=(M+1);i++) A[N+1][i]=-1;
		//now column
		for(i=0;i<=(N+1);i++) A[i][0]=-1;
		for(i=0;i<=(N+1);i++) A[i][M+1]=-1;
		//check for all the cases
		for(i=1;i<=N;i++)
			for(j=1;j<=M;j++)
			{
				//each position i,j has 8 positions
				if(A[i][j]!=(-1))
				{
					int v=A[i][j];
					//all the neighbours
					//8 cases
					int flag=0;
						 if(v==A[i-1][j-1])	flag=1;
					else if(v==A[i-1][j])	flag=1;
					else if(v==A[i-1][j+1])	flag=1;
					else if(v==A[i][j-1])	flag=1;
					else if(v==A[i][j+1])	flag=1;
					else if(v==A[i+1][j-1])	flag=1;
					else if(v==A[i+1][j])	flag=1;
					else if(v==A[i+1][j+1])	flag=1;
					else 
					{
						//
					}
					
					if(flag==1) s.insert(v);
				}
			}
		cout<<s.size()<<endl;
		s.clear();
	}
	
}
