#include<stdio.h>
#define AIR 1
#define WATER 2
#define FIRE 3
int max3(int a,int b,int c)
{
	int max1=(a>b)?a:b;
	int max2=(c>max1)?c:max1;
	return max2;
}
int maxi(int a,int b)
{
	return (a>b)?a:b;
}
int times(int H,int A,int pr_state)
{
	if(H<=0 || A<=0) return 0;
	if(pr_state==AIR)
	{
		H=H+3;
		A=A+2;
		return 1+maxi(times(H,A,WATER),times(H,A,FIRE));
	}
	if(pr_state==WATER)
	{
		H=H-5;
		A=A-10;
		return 1+maxi(times(H,A,AIR),times(H,A,FIRE));
	}
	if(pr_state==FIRE)
	{
		H=H-20;
		A=A+5;
		return 1+maxi(times(H,A,WATER),times(H,A,AIR));
	}
}
int time2(int H,int A,int pr_state)//prev_state
{
	if(H<=0 || A<=0) return 0;
	else
	{
		if(pr_state==AIR)
		{
			return 1+maxi(times(H-5,A-10,WATER),times(H-20,A+5,FIRE));
		}
		if(pr_state==WATER)
		{
			return 1+maxi(times(H+3,A+2,AIR),times(H-20,A+5,FIRE));
		}
		if(pr_state==FIRE)
		{
			return 1+maxi(times(H-5,A-10,WATER),times(H+3,A+2,AIR));
		}
	}
}
int main()
{
	int h=20,a=8;
	printf("%d\n",max3(time2(h,a,AIR),time2(h,a,WATER),time2(h,a,FIRE)));
}
