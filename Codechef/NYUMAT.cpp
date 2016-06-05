#include<iostream>
using namespace std;
int A[51][51];
int main()
{
	int T,N,i,j,diff,flag=1;
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(i=0;i<N;i++)
			for(j=0;j<N;j++) cin>>A[i][j];
		//ALGO
		for(i=1;i<N;i++)
		{
			diff=A[i][0]-A[0][0];
			if(diff>=0)//we minus the diff
			{
				for(j=0;j<N;j++)
					A[i][j]-=diff;
			}
			else//we add the diff
			{
				diff*=(-1);
				for(j=0;j<N;j++)
					A[i][j]+=diff;
			}
			//now we check about the equality
			for(j=0;j<N;j++)
			{
				if(A[i][j]!=A[0][j])
				{
					flag=0;
					break;
				}
			}
			if(flag==0) break;
		}
		if(flag==0) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;	
		flag=1;
	}
	return 0;
}
