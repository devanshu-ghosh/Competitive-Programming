#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N,end=5,q=2,round=1;
	cin>>N;
	int v=N;
	if(N<=5)
	{
		if(v==1) cout<<"Sheldon"<<endl;
		else if(v==2) cout<<"Leonard"<<endl;
		else if(v==3) cout<<"Penny"<<endl;
		else if(v==4) cout<<"Rajesh"<<endl;
		else cout<<"Howard"<<endl;
		return 0;
	}
	while(1)
	{
		if(end>=N) break;
		end+=q*5;
		q=q*2;
		round++;
	}
	int step=pow(2,round-1);
	int start =  end-(step*5)+1;
	N=N-start+1;
	v=N/step;
	if(v==0) cout<<"Sheldon"<<endl;
	else if(v==1) cout<<"Leonard"<<endl;
	else if(v==2) cout<<"Penny"<<endl;
	else if(v==3) cout<<"Rajesh"<<endl;
	else cout<<"Howard"<<endl;
}
