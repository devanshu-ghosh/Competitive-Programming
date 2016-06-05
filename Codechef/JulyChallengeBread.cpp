#include<stdio.h>
long long int A[100005];
int main()
{
	int T,i;
	long long int N,K,rem,p;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld%lld",&N,&K);
		for(i=0;i<N;i++)
		{
			scanf("%d",&A[i]);
		}
		//Algo
		rem=K;p=1;
		for(i=0;i<N;i++)
		{
			if(rem>=A[i])
			{
				rem-=A[i];
				//no change in package
			}
			else//rem<A[i]
			{
				int x=1;
				A[i]-=rem;rem=0;
				if(A[i]<K)
				{
					x=1;rem=K-A[i];
				}
				else
				{
					x=A[i]/K;
					if(A[i]%K==0)
					{
						rem=0;
					}
					else
					{
						x++;rem=(x*K)-A[i];
					}
				}
				/*while(1)
				{
					if((x*K)>=A[i])
					{
						rem=x*K-A[i];
						break;
					}
					else x++;
				}*/
				p=p+x;
			}
			if(rem>0) rem--;
		}
		printf("%lld\n",p);
	}
	return 0;
}
