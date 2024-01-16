#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		if((k%3)==0)
			printf("NO\n");
		else
			printf("Yes\n");
	}
}