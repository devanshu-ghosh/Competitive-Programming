//check for anagrams
//anagrams are two strings which are rearrangement of each other
//can work with spaces also
//ACCEPTED
#include<stdio.h>
main()
{
	
	int t;
	scanf("%d",&t);
	fflush(stdin);
	while(t)
	{
		//input if rings are space separated
		char s1[50000],s2[50000];int i;
		scanf("%s",&s1);scanf("%s",&s2);
		fflush(stdin);
		//gets(s2);
		int count[26];
		for(i=0;i<26;i++) count[i]=0;
		for(i=0;s1[i]!='\0';i++)
		{
			if(s1[i]==' ') continue;
			count[s1[i]-'a']++;
		}
		for(i=0;s2[i]!='\0';i++)
		{
			if(s1[i]==' ') continue;
			count[s2[i]-'a']--;
		}
		int flag=1;
		for(i=0;i<26;i++)
		{
			if(count[i]!=0)
			{
				flag=0;
				break;
			}
		}
		if(flag) printf("YES\n");
		else printf("NO\n");
		t--;
	}
	
}
