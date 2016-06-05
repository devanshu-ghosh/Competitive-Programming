#include<iostream>
#include<cmath>
using namespace std;
int ph[10000000];//stores phi values
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int phi (int n)
{
	//if(ph[n]!=0) return ph[n];
	int result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	//ph[n]=result;
	return result;
}
int ans(int n)
{
	int i=1;
	int p=1,sum=0;
	for(i=1;(i*i)<=n;i++)
	{
		if(n%i==0)
		{
			int fac1=i;
			int fac2=n/i;
			if(fac1!=fac2)
			{
				sum+=fac1*phi(fac2);
				sum+=fac2*phi(fac1);
				p*=pow(fac1,phi(fac2));
				p*=pow(fac2,phi(fac1));
			}
			else
			{
				sum+=fac1*phi(fac2);
				p*=pow(fac1,phi(fac2));
			}
			//p*=pow(fac1,phi(fac2));
			//p*=pow(fac2,phi(fac1));
		}
	}
	cout<<sum<<" "<<p<<endl;
	cout<<(n*sum)/p<<endl;
	//return (n*sum)/p;
}
int ans2(int n)
{
	int i=1;
	int p=1,sum=0;
	for(i=1;(i*i)<=n;i++)
	{
		if(n%i==0)
		{
			
			int fac1=i;
			int fac2=n/i;
			if(fac1!=fac2)
			{
				sum+=(n*phi(fac2))/fac1;
				sum+=(n*phi(fac1))/fac2;
			}
			else
			{
				sum+=(n*phi(fac2))/fac1;
			}
		}
	}
	//cout<<sum<<" "<<p<<endl;
	cout<<(sum)<<endl;
	//return (n*sum)/p;
}
int main()
{
	int p=1;
	for(int i=1;i<=10;i++)
	{
		ans2(i);
	}
}

