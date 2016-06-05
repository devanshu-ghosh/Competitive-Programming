//program to add large numbers
#include<stdio.h>
#include<string.h>
int a[1000],b[1000],res[1000],table[4800][1000],input[1000];//global
//inputAndStore function to handle the input
//input will be converted into reverse int array and returns the no of digits in input
void reverse(char s[])
{
	int i=0,j=strlen(s)-1;
	while(i<j)
	{
		char t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;j--;
	}
}
int inputAndStore(int input[])
{
	char in[1000];
	gets(in);
	strrev(in);
	//reverse(in);
	//input convertion into int array
	int i,len;
	for(i=0;in[i]!='\0';i++) input[i]=in[i]-'0';
	len=i;
	for(;i<1000;i++) input[i]=0;
	return len;//retuns the number of digits in input
	
}
//add function
//and returns no of digits in fibonacci number
int add(int n1[],int n2[])
{
	int i;
	for(i=0;i<1000;i++)res[i]=0;
	for(i=0;i<1000;i++)//there is some waste bcoz i am adding all the indexes which is not needed
	{
		res[i]=n1[i]+n2[i];
	}
	//carry operation
	for (i = 0; i < 1000; i++)
	{
		if (res[i] > 9)
		{
			res[i + 1] += res[i] / 10;
			res[i] = res[i] % 10;
		}
	}
	while(res[i]==0) i--;
	return (i+1);
}
//array copyfunction
//to perform c=a+b;
//a=b;b=c;
//copy n2 to n1
void copyArray(int n1[],int n2[])
{
	int i;
	for(i=0;i<1000;i++)
	{
		n1[i]=n2[i];
	}
}
//print the resultant arrsy
void print(int res[])
{
	int i=1000;
	while(res[i]==0) i--;//to skip the front zeroes
	//printing
	//printf("%d ",i+1);//no of digits
	for(;i>=0;i--) printf("%d",res[i]);
}
//check function to see if they are equal or not
int determine(int res[],int input[],int n)//n saves the number of digits in input
{
	int i,flag=1;
	for(i=0;i<n;i++)
	{
		if(res[i]!=input[i])
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
		int i;
		//initialising
		for(i=0;i<1000;i++){a[i]=0;res[i]=0;b[i]=0;input[i]=0;}
		a[0]=1;
		b[0]=0;
		//algo based on no of digits
		int NODF,c=0;
		NODF=add(a,b);
		i=0;int u=0;
		while(NODF<1000)
		{
			copyArray(a,b);
			copyArray(b,res);
			copyArray(table[u],res);
			//print(res);printf("\n");
			NODF=add(a,b);u++;
		}
		//priting the table
		for(i=0;i<100;i++)
		{
			print(table[i]);
			
		}
		//printf("%d",c);
}
