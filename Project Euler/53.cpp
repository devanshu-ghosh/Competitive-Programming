#include<iostream>
//what happens is that we have to calculate no of ncr such that it exceeds
//10^6 . we use pascal triangle and the solution becomes very easy
//only one bottle neck is that values start exceeding the limit of long long int
//one workaround  is to assign that value as 10^6 . it would ensure that further values are correct
//another trick is to mod the values
using namespace std;
long long int A[101][101];
int main()
{
	A[0][0]=1;
	int i,j,c=0;
	for(i=1;i<101;i++)
	{
		A[i][0]=1;
		for(j=1;j<=i;j++)
		{
			A[i][j]=A[i-1][j]+A[i-1][j-1];
			//A[i][j]=1000000;
			//cout<<A[i][j]<<" ";
			if(A[i][j]>1000000) 
			{
				A[i][j]=1000000;
				c++;
			}
		}
		cout<<endl;
	}
	cout<<c;
}
			
			
