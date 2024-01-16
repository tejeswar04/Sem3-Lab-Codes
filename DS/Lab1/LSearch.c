#include<stdio.h>

int LSearch(int n,int arr[],int target)
{
	//int size=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
		if(arr[i]==target)
			return 1;
	return 0;
}
int main()
{
	int n;
	printf("NUmber of elements ");
	scanf("%d",&n);
	int arr[n];
	int target;
	printf("Enter elements");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter target");
	scanf("%d",&target);
	LSearch(n,arr,target)?printf("Found"):printf("NotFound");
	return 0;
}