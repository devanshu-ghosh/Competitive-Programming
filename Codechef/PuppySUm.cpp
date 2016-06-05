#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	int* X = new int[N+1];
	int* Y = new int[N+1];
	for(int i=1;i<=N;i++)
		cin>>X[i]>>Y[i];
	sort(X+1,X+N+1);
	sort(Y+1,Y+N+1);
	//commulative sum calculation
	X[0]=0;Y[0]=0;
	for(int i=1;i<=N;i++)
	{
		X[i]=X[i-1]+X[i];
		Y[i]=Y[i-1]+Y[i];
	}
	string path;
	cin>>path;
	int x=0,y=0;
	for(int i=0;i<M;i++)
	{
		switch(path[i])
		{
			case 'R':x++;break;
			case 'L':x--;break;
			case 'U':y++;break;
			case 'D':y--;break;
		}
		//now we have the new point
		//Binary search for c1 such that x_i<=x
		int cntx, cnty; 

        long long int tot = 0;

        cntx = upper_bound(X.begin()+1, X.end(), u)-X.begin()-1;

        cnty = upper_bound(y.begin()+1, y.end(), v)-y.begin()-1;

        tot += 1LL * cntx * u - X[cntx];

        tot += X[n] - X[cntx] - 1LL * ( n - cntx ) * u;

        tot += 1LL * cnty * v - Y[cnty];

        tot += Y[n] - Y[cnty] - 1LL * ( n - cnty ) * v;

        printf("%lld\n", tot);
	}
}
