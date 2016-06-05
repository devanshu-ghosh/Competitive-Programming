#include<stdio.h>
#include<string.h>
char L1[2000005];
char L2[2000005];
int main()
{
	long long int T;
	scanf("%lld",&T);
	long long int count=0;
	long long int i,len,flag=1,pr;
	while(T--)
	{
		i=0;
		scanf("%s",&L1);
		scanf("%s",&L2);
		len=strlen(L1);
		//find the starting lane
		while(L1[i]=='.' && L2[i]=='.')
		{
			i++;
		}
		char ch1=L1[i];
		char ch2=L2[i];
		if(ch1=='#' && ch2=='#')
		{
			flag=0;
		}
		else if(ch1=='.')
		{
			pr=1;
		}
		else
		{
			pr=2;
		}
		if(flag!=0)
		{
			//walk on the lanes
			for(;i<(len-1);i++)
			{
				if(pr==1)
				{
					if(L1[i+1]=='.')
					continue;
					else if(L1[i+1]=='#' && L2[i+1]=='.')
					{
						count++;
						pr=2;
					}
					else
					{
						flag=0;
						break;
					}
				}
				else
				{
					if(L2[i+1]=='.')
					continue;
					else if(L2[i+1]=='#' && L1[i+1]=='.')
					{
						count++;
						pr=1;
					}
					else
					{
						flag=0;
						break;
					}
				}
			}
		}
			if(flag==0)
			{
				printf("No\n");
			}
				else
			{
				printf("Yes\n");
				printf("%lld\n",count);
				count=0;
			}
		flag=1;
	}
	return 0;
}
