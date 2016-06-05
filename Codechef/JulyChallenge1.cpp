#include<stdio.h>
int main()
{
	int T,i;
	scanf("%d",&T);
	int tc[6];
	while(T)
	{
		//input for particular test case
		for(i=0;i<6;i++)
		{
			char colour[10];
			scanf("%s",&colour);
			//printf("%s ",colour);
			if(colour[0]=='b' && colour[2]=='a') tc[i]=0;//black
			else if(colour[0]=='b' && colour[1]=='l') tc[i]=1;//blue
			else if(colour[0]=='r') tc[i]=2;//red
			else if(colour[0]=='g') tc[i]=3;//green
			else if(colour[0]=='y') tc[i]=4;//yellow
			else tc[i]=5;
		}
		int flag1=0,flag2=0;
		for(i=0;i<=1;i++)
		{
			if(tc[i]==tc[2] || tc[i]==tc[3]) flag1=1;
			else flag1=0;
			if(tc[i]==tc[4] || tc[i]==tc[5]) flag2=1;
			else flag2=0;
			if(flag1==1 && flag2==1)
			{
				printf("YES\n");break;
			} 
			else
			{
				flag1=0;flag2=0;
			}
		}
		if(flag1==0 && flag2==0)
			printf("NO\n");
		T--;
	}
	return 0;
}
