#include<stdio.h>
int main(void)
{
	int t,mL1=-32000,mL2=-32000,fw=0,fl=0,lead;
	scanf("%d",&t);
	while(t--)
	{
		int si,ti;
		scanf("%d%d",&si,&ti);
		lead=si-ti;
		if(lead>0)
		{
			if(lead>mL1) mL1=lead;
		}
		else
		{
			if((-1*lead)>mL2) mL2=(-1*lead);
		}
		//final winner of this round
		if(mL1>mL2){ fw=1;fl=mL1;}
		else {fw=2;fl=mL2;}
		printf("%d %d",fw,fl);
	}
	printf("%d %d",fw,fl);
	return 0;
}
