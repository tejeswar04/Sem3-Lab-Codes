#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	printf("Number of test cases : ");
	scanf("%d",&t);
	while(t--)
	{
		int n;
		printf("Enter the number of days : ");
		scanf("%d",&n);
		int a[n];
		printf("Enter prices : ");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int b=0,s=0,maxprofit=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[s])
			{
				s=i;
				maxprofit=a[b]-a[s];
				//printf("%d",i);
			}
			else if(a[s]>a[b])
			{
				printf("(%d %d) ",b,s);
				b=i;
				s=i;
			}
			if(a[i]<a[b])
			{
				b=i;
			}
			if(i==n-1)
				printf("(%d %d) ",b,s);
		}
	}
}