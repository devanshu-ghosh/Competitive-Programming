#include<iostream>
using namespace std;
int main()
{
	int T;
	int l1,w1,l2,w2;
	cin>>T;
	while(T--)
	{
		cin>>l1>>w1>>l2>>w2;
		int max = l1*w1 + l2*w2 ;
		int min=0;
		if(l1<=l2)
		{
			if(w1<=w2)
			{
				//R1 is inside R2
				min+= l2*w2;
			}
			else//w1>w2
			{
				min+= l2*w2;
				min+= l1*(w1-w2);
			}
		}
		else//l1>l2
		{
			if(w1>=w2)
			{
				min+= l1*w1;
			}
			else//w1<w2
			{
				min+= l1*w1;
				min+= l2*(w2-w1);
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}
