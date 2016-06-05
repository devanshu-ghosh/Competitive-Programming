#include<iostream>
using namespace std;
struct node
{
	int val,mark;
};
node A[305];
int absl(int x)
{
	return (x>0)?x:-1*x;
}
int main()
{
	int T,N,K;
	int i,j,c=0,pr_index=0,pos;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		for(i=0;i<N;i++)
			cin>>A[i].val;
		for(i=0;i<N;i++)
		{
			//step 1 : search for the start of the round
			for(j=i;j<N;j++)
			{
				if(A[j].mark==0)
				{
					pr_index=j;
					break;
				}
			}
			//some condition to end this prematurely
			if(j==N) break;
			//a new round has been confirmed right now
			//pr_index is the start of the round
			c++;
			A[pr_index].mark=c;
			pos=pr_index;
			//step 2 : now we mark the elements for this round
			for(j=pr_index+1;j<N;j++)
			{
				if(A[j].mark!=0) continue;
				if(absl(A[pos].val-A[j].val)>=K)
				{
					A[j].mark=c;
					pos=j;
				}
			}
		}
		cout<<c<<endl;
		//flush the values
		c=0;
		for(i=0;i<N;i++)
			A[i].mark=0;
		pr_index=0;
	}
}
