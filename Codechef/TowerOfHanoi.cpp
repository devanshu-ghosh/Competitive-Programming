#include<stdio.h>
void TowerOfHanoi(int n,int x,int y,int z)
{
	if(n>=1)
	{
		TowerOfHanoi(n-1,x,z,y);
		printf("Move top disk from tower %d to top of tower %d\n",x,y);
		TowerOfHanoi(n-1,z,y,x);
	}
}
int main()
{
	TowerOfHanoi(3,1,2,3);
}
