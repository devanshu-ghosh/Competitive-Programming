#include<iostream>
#include<cmath>
#include<set>
using namespace std;
#define N 100
typedef long long int ll;
//int main()
//{
//	ll i,b,c=0,p;
//	set<ll> s;
//	set<ll>::iterator itr;
//	for(i=2;i<=N;i++)
//	{
//		for(b=2;b<=N;b++)
//		{
//			p=pow(i,b);
//			itr=s.find(p);
//			if(itr!=s.end())
//			{
//				cout<<i<<" "<<b<<endl;
//			}
//			else
//				s.insert(p);
//		}
//	}
//	cout<<s.size();
//}
int main()
{
	int a,b,c,d,count=0;
	ll p=1;
	for(a=2;a<=N;a++)
	{
		for(c=2;c<a;c++)
		{
			for(d=2;d<=N;d++)
			{
				for(b=2;b<d;b++)
				{
					if(d%b==0)
					{
						p=pow(c,d/b);
						if(p>a) break;
						else
						{
							if(p==a)
							{
								count++;
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
							}
						}
					}
				}
			}
		}
	}
	cout<<count;
}
