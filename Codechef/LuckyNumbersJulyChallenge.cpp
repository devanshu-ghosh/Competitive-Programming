#include<stdio.h>
int countZeroes(int n,int p)
{
	int c=0;
	while(n%p==0)
	{
		c++;
		n=n/p;
	}
	return c;
}
int main()
{
	int N;
	scanf("%d",&N);
	int i,two,five,temp,x;
	long long int answer;
	for(i=0;i<N;i++)
	{
		scanf("%d",&temp);
		two=countZeroes(temp,2);
		five=countZeroes(temp,5);
		if(five==0) printf("%d\n",temp);
		else if(five<=two) printf("%d\n",temp);
		else
		{
			answer=temp;
			x=five-two;
			if(x&1) x++;
			x=x/2;
			while(x)
			{
				answer*=4;
				x--;
			}
			printf("%lld",answer);
		}
	}
	return 0;
}
