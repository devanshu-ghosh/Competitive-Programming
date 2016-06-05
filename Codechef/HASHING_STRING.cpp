#include<iostream>
#include<string>
#include<cmath>
using namespace std;
#define p 31
#define MOD 1000000007
typedef long long int ll;
//MOD is expensive if done a lot of times
//Try to remove any unnecessary MOD operations
//Original string
//assuming small size latin alphabet
string s;
int len;
//Prefix HASH array
int HASH[100];
int REV_HASH[100];
int prefix_hash(int N)
{
	//HASH = new int[N];//allocate the memory
	int i;
	ll power=p;
	HASH[0]=(s.at(0)-'a')%MOD;
	for(i=1;i<(N);i++)
	{
		HASH[i]=HASH[i-1]+((s.at(i)-'a')*power)%MOD;
		HASH[i]%=MOD;
		power=power*p;
		power%=MOD;
	}
}
int suffix_hash(int N)
{
	//REV_HASH = new int[N];//allocate the memory
	int i,k=1;
	ll power=p;
	REV_HASH[0]=(s.at(N-1)-'a')%MOD;
	for(i=N-2;i>=0;i--)
	{
		REV_HASH[k]=REV_HASH[k-1]+((s.at(i)-'a')*power)%MOD;
		REV_HASH[k]%=MOD;
		power=power*p;
		power%=MOD;
		k++;
	}
}
void inputAndCreate()
{
	cout<<"Enter the String : ";
	cin>>s;
	len=s.length();
	prefix_hash(len);
	suffix_hash(len);
}
int forward_hash(int L,int R)
{
	ll temp;
	if(L==0)
	{
		temp=(HASH[R])/pow(p,L);// p^L will always divide the numerator
	}
	else
	{
		temp=(HASH[R]-HASH[L-1])/pow(p,L);// p^L will always divide the numerator
	}
	return temp%MOD;
}
int reverse_hash(int L,int R)
{
	int le=(len-1)-L;
	int rr=(len-1)-R;
	L=rr;R=le;
	ll temp;
	if(L==0)
	{
		temp=(REV_HASH[R])/pow(p,L);// p^L will always divide the numerator
	}
	else
	{
		temp=(REV_HASH[R]-REV_HASH[L-1])/pow(p,L);// p^L will always divide the numerator
	}
	return temp%MOD;
}
int main()
{
	inputAndCreate();
	int c,R,L;
	while(1)
	{
		cout<<"1.CHECK 2.EXIT\n";
		cin>>c;
		if(c==2)	break;
		else
		{
			cout<<"Enter L and R\n";//indexing starts 0
			cin>>L>>R;
			if(forward_hash(L,R)==reverse_hash(L,R))
				cout<<"SUBSTRING IS PALLINDROME\n";
			else	cout<<"NO\n";
		}
	}
}
