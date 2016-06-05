//Chefs and segments
//Gives TLE
#include<stdio.h>
int A[100005];
int PC[100005];//initialise it all to 1 so thatveven if it overflows , it does not changes the answer
long long int ans(int L,int R,int M)
{
	int i;
	long long int p=1;
	//some calculations
	if(L%2==1 && R%2==1)//both odd
	{
		//L is ok
		p=A[R];R--;
	}
	else if(L%2==0 && R%2==0)//both even
	{
		p=A[L];L++;
	}
	else if(L%2==0 && R%2==1)//even,odd
	{
		p=A[L]*A[R];
		L++;R--;
	}
	for(;L<=R;L=L+2)
		p=(p*PC[L/2])%M;
		//p=((p%M)*(PC[L/2]%M))%M;
	p=p%M;
	return p;
}
int main()
{
	int N,T,L,R,M;
	scanf("%d",&N);
	int i;
	for(i=1;i<=N;i++)
	{
		scanf("%d",&A[i]);PC[i]=1;
	}
	//precomputing values
	int k=0;
	for(i=1;i<=N;i=i+2)
	{
		PC[k]=A[i+1]*A[i];k++;
	}
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&L,&R,&M);
		printf("%lld\n",ans(L,R,M));
	}
	return 0;
}
