#include<stdio.h>
typedef long long int ll;
int A[100005];
int main()
{
	int n,k,h,t,sum=0,i=0;
	ll count=0;
	scanf("%d%d%d",&n,&h,&k);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	i=0;
	while(i<n)
	{
		//add stuff
		while((i<n)&&(sum+A[i])<=h)
		{
			sum+=A[i++];
		}
		//remove stuff
		while((sum+A[i])>h)
		{
			sum-=k;count++;
		}
		if(sum<0)
			sum=0;
	}	
	if(sum>0)
	{
		if(sum%k==0)
			count+=sum/k;
		else
			count+= (int)(sum/k) + 1;
	}
	printf("%lld\n",count);
	return 0;
}

