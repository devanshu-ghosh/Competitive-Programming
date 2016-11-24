#include<iostream>
using namespace std;
int male[400];
int female[400];
int main()
{
	std::ios_base::sync_with_stdio(false);
	int N;
	cin>>N;
	char sex;
	int a,b,i;
	while(N--)
	{
		cin>>sex;
		cin>>a>>b;//1 to 366
		if(sex=='M')
		{
			male[a]++;
			male[b+1]--;
		}
		else
		{
			female[a]++;
			female[b+1]--;
		}
    }
	male[0]=0;
	female[0]=0;
	for(i=0;i<370;i++)
	{
		male[i]+=male[i-1];
		female[i]+=female[i-1];
	}
	int max=0,temp;
	//he invites . he can invite all on the day they are free or none
	for(i=1;i<=367;i++)
	{
		temp =(male[i]>female[i])?female[i]:male[i];
		if(temp>max)
			max=temp;
		
	}
	cout<<2*max<<endl;
}
