#include<stdio.h>
int main()
{
	long long int count=0,v_i,v_f;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld %lld",&v_i,&v_f);
		//v_f is power of two
		//ALGO
		while(1)
		{
			if(v_f==v_i)
			{
				printf("%lld\n",count);
				count=0;
				break;
			}
			else if((v_i&&(!(v_i&(v_i-1)))))//power of two
			{
				//we now apply v/2 rule or 2*v accordingly 
				//if v_f>v_i 
				if(v_f>v_i)
				{
					while(v_i!=v_f)
					{
						v_i*=2;
						count++;
					}
				}
				else
				{
					while(v_i!=v_f)
					{
						v_i/=2;
						count++;
					}
				}
			}
			else//last rule
			{
				if(v_i&1)//odd
				{
					v_i=((v_i-1)/2);
					count++;
				}
				else
				{
					v_i/=2;
					count++;
				}
			}
		}
	}
}
