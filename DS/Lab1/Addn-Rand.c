#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the number of random numbers you need ");
	scanf("%d",&n);
	int min=-100,max=100;
	int count[201]={0};
	for(int i=0;i<n;i++)
	{
		int a=(rand()%(max-min+1))+min;
		count[a+100]++;
	}
	printf("FRequncy of random numbers")
	for(int i=0;i<200;i++)
	{
		if(count[i]!=0)
			printf("%d - %d",i-100,count[i]);
	}
}