#include<stdio.h>
int mark[67108864];
long long int sum=0;
//we divide the hash table into sectors of 32 integers
//mark[0] contains info about 0-31 and so on and so forth
//each element is a int . thats why we can save info about 32 integers. 
//one at each position
void add(unsigned int X)
{
	//selective set a+b
	mark[X/32]=(mark[X/32] | (1<<(X%32)));
}
void remove(unsigned int X)
{
	//selective clear a.b'
	mark[X/32]=(mark[X/32] & (~(1<<(X%32))));
}
int search_Val(unsigned int X)
{
	return (mark[X/32] & (1<<(X%32)));
}
void set_element(unsigned int S)
{
	if(S&1)
	{
		add(S/2);
		sum+=(S/2);
	} 
	else
	{
		if(search_Val(S/2))
		{
			sum-=(S/2);
		}	
		remove(S/2);
	} 
}
/*int main()
{
	int c,x;
	for(int i=0;i<MAX/32;i++) mark[i]=0;
	while(1)
	{
		cout<<"1.INSERT 2.ERASE 3.FIND 4.EXIT"<<endl;
		cin>>c;
		if(c==4) break;
		switch(c)
		{
			case 1:cin>>x;
				add(x);
				cout<<mark[x/32]<<endl;
				break;
			case 2:cin>>x;
				remove(x);
				cout<<mark[x/32]<<endl;
				break;
			case 3:cin>>x;
				int flag;
				flag=search_Val(x);
				if(flag) cout<<x<<" is present"<<endl;
				else cout<<x<<" is not present"<<endl;
				break;
			default:cout<<"Wrong Input\n";
		}
	}
}*/

int main()
{
	unsigned int Q,S,A,B;
	scanf("%lu%lu%lu%lu",&Q,&S,&A,&B);
	set_element(S);
	for(int i=2;i<=Q;i++)
	{
		S=(A*S+B)%(4294967296);
		//printf("%lu\n",S);
		set_element(S);
	}
	printf("%lld\n",sum);
}
