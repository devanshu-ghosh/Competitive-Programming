//count inversions using BIT
//step 1 : make a suitable array for memory efficiency
//step 2 : make a BIT of it and do something
#include<iostream>
#include<algorithm>
#define size 100005
using namespace std;
struct node
{
	int val,index;
};
//BIT IMPLEMENTATION
int FT[size];
int N;
void update(int index,int val)
{
	index++;
	while(index<=N)
	{
		FT[index]+=val;
		index+=((-index)&index);
	}
}
int query(int index)
{
	index++;
	int sum=0;
	while(index>0)
	{
		sum+=FT[index];
		index-=((-index)&index);
	}
	return sum;
}
int sortVal(const node &lhs , const node &rhs)
{
	return lhs.val<rhs.val;
}
node A[size];
int main()
{
	int T,i,temp;
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>A[i].val;
			A[i].index=i;
		}
		//sort the array
		sort(A,A+N,sortVal);
		for(i=0;i<N;i++)
		{
			int pos=A[i].index;
			A[pos].val=i;
		}
		
		//we make the size of FT as MAX+1
		//here size shd be N+1 as usual
		int sum=0;
		for(i=N-1;i>=0;i--)
		{
			sum+=query(A[i].val);
			update(A[i].val,1);
		}
		cout<<sum;
		//flush the FT
		//for(i=0;i<=N;i++) FT[i]=0;

}
