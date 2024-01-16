#include<stdio.h>
#include<stdbool.h>

int main()
{
	int n;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	int a[n];
	bool hash[100]={false};
	printf("Enter the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		hash[a[i]+50]=true;
	}
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			int third=-a[i]-a[j];
			if(third!=a[i]&&third!=a[j])
				if(hash[third+50])
					printf("%d\t%d\t%d\n",a[i],a[j],third);
		}
	}
	return 0;
}