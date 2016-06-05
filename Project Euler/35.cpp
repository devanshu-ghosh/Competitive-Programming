//rotating primes
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	if(n%2==0) return 0;
	int i,flag=1,x=sqrt(n);
	for(i=3;i<=x;i++)
	{
		if(n%i==0)
		{
			flag=0;break;
		}
	}
	return flag;
}
int createNum(int A[],int NOD)
{
	int r=0,i=0;
	for(i=0;i<NOD;i++)
		r=r*10+A[i];
	return r;
}
void rotateArray(int A[],int NOD)
{
	int temp=A[NOD-1];
	int i;
	for(i=NOD-1;i>0;i--)
	{
		A[i]=A[i-1];
	}
	A[0]=temp;
}
int extractReverse(int A[],int n)
{
	int m=n,NOD=0;
	while(m!=0)
	{
		int d=m%10;
		A[NOD]=d;NOD++;
		m=m/10;
	}
	//reverse array
	int i=0,j=NOD-1;
	while(i<j)
	{
		int temp=A[j];
		A[j]=A[i];
		A[i]=temp;
		i++;j--;
	}
	return NOD;
}
void initial(int A[])
{
	int i;
	for(i=0;i<10;i++) A[i]=0;
}
int main()
{
	int i,c=0;
	int A[10];
	for(i=11;i<1000000;i=i+2)
	{
		if(i%5==0) continue;
		//Extract digits and reverse it
		int NOD=extractReverse(A,i);
		//Algo
		int j,flag=1,n;
		//printf("%d ",i);
		for(j=1;j<=NOD;j++)
		{
			n=createNum(A,NOD);
			if(!isPrime(n))
			{
				//printf("ok%d",j);
				flag=0;break;
			}
			rotateArray(A,NOD); 
		}
		//printf("\n");
		if(flag==1) c++;
			//printf("%d ",i);
		initial(A);
	}
	printf("%d ",c);
}
