#include<iostream>
using namespace std;
int a[100005];
long long int merged(int start,int end,int mid)
{
	//int *p = new int[start-end+1];
	long long int invc=0;
	int p[100005];
	int k=0;
	int i=start,j=mid+1;
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			p[k++]=a[i++];
		}
		else
		{
			p[k++]=a[j++];
			invc+=mid-i+1;
		}
	}
	while(i<=mid) 
	{
		p[k++]=a[i++];
	}
	while(j<=end)
	{
		p[k++]=a[j++];
	}
	k=0;
	for(i=start;i<=end;i++)
	{
		a[i]=p[k];k++;
	}
	return invc;
}
long long int mergeSort(int start,int end)
{
	int mid;
	long long int inv=0;
	if(end>start)
	{
		mid=(start+end)/2;
		inv=mergeSort(start,mid);
		inv+=mergeSort(mid+1,end);
		inv+=merged(start,end,mid);
	}
	return inv;
}
int main()
{
	int N;
	cin>>N;
	int i;
	for(i=0;i<N;i++)
		cin>>a[i];
	cout<<mergeSort(0,N-1)<<endl;
	return 0;
}
