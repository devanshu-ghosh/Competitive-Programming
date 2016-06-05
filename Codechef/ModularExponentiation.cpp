//modular exponentiation
#include<stdio.h>
int ModExpSlow(int base,int index,int m)
{
	int y=base;
	int i;
	for(i=2;i<=index;i++)
	{
		//y=(y*base);//%m;
		y=((y%m)*(base%m))%m;
	}
	return y;
}
int ModExpFast(int base,int index,int m)
{
	int y=1;
	while(index>=1)
	{
		if(index%2==0) //even
		{
			//y=(y*base*base);
			y=((y%m)*(base%m)*(base%m))%m;
			index=index/2;
		}
		else
		{
			y=((y%m)*(base%m))%m;	//y=y%m;
			index--;
		}
	}
	return y;
}
int ModExpSuperFast(int base,int index,int m)
{
	int y=1;
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
int main(void)
{
	printf("%d %d %d ",ModExpSlow(2,15,121),ModExpFast(5,6,32),ModExpSuperFast(5,6,32));
}
