#include<iostream>
using namespace std;
int main()
{
	int T,N,i;
	cin>>T;
	string t="",be="",af="",eng="";
	while(T--)
	{
		cin>>N;
		for(i=1;i<=N;i++)
		{
			cin>>t;
			if(t[0]=='#')//means arabic
			{
				be+=t+" ";
			}
			else
			{
				eng=t+" ";
				break;
			} 
		}
		i++;
		if(i<=N)
		{
			while(i<=N)
			{
				cin>>t;
				af+=t+" ";
				i++;
			}
		}
		cout<<(af+eng+be)<<endl;
		t="",be="",af="",eng="";
	}
}
