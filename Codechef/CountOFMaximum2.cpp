#include<stdio.h>
int a[10005];//global array to implement counting sort
void initialize(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) a[i]=0;
}
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);//size of array
		initialize(a,n);//only initializing till n 
		//now input of the array
		int i,p;int MAX_COUNT=0,value;
		for(i=0;i<n;i++)
		{
			scanf("%d",&p);
			a[p]++;
			//optimization possible here
			//yahi pe maximum nikal lo
			if(a[p]>MAX_COUNT)
			{
				MAX_COUNT=a[p];
				value=p;
			}
		}
		//now in case of 2 or more with same frequency 
		//print the least vlue
		for(i=0;i<n;i++)
		{
			if(a[i]==MAX_COUNT)
			{
				value=i;
				break;
			}	
		}
		printf("%d %d\n",value,MAX_COUNT);
	}
	return 0;
}

