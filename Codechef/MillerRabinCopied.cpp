#include<stdio.h>
#include<math.h>
long int power(long int base,long int index,long int m)
{
	long long int y=1;
	while(index)
	{
		if(index&1)//if odd
			y=((y%m)*(base%m))%m;
		index=index>>1;
		//base=(base*base)%m;
		base=((base%m)*(base%m))%m;
	}
	return y;
}

bool witness(int a, int n)
{
 	int t,u,i;
 	long prev,curr;
 	u=n/2;
 	t=1;
	 while(!(u&1))
	 {
	  u/=2;
	  ++t;
	 }

 prev=power(a,u,n);
 for(i=1;i<=t;++i)
 {
  //curr=(prev*prev)%n;
  	curr=((prev%n)*(prev%n))%n;
  	if((curr==1)&&(prev!=1)&&(prev!=n-1)) 
  	 return true;
  	prev=curr;
 }
 if(curr==-1) 
  return true;
 return false;
}
 bool isPrime( int number )
{
	 if(witness(2,number)) return false;
	 if(witness(3,number)) return false;
	 //if(witness(61,number)) return false;
	 return true;

 /*WARNING: Algorithm deterministic only for numbers < 4,759,123,141 (unsigned int's max is 4294967296)
   if n < 1,373,653, it is enough to test a = 2 and 3.
   if n < 9,080,191, it is enough to test a = 31 and 73.
   if n < 4,759,123,141, it is enough to test a = 2, 7, and 61.
   if n < 2,152,302,898,747, it is enough to test a = 2, 3, 5, 7, and 11.
   if n < 3,474,749,660,383, it is enough to test a = 2, 3, 5, 7, 11, and 13.
   if number < 341,550,071,728,321, it is enough to test a = 2, 3, 5, 7, 11, 13, and 17.*/
}
int main()
{
	long int i,c=0;
	for(i=3;i<=10000000;i=i+2)
	{
		if(isPrime(i))
		c++;
	}
	printf("%d",c);
}
