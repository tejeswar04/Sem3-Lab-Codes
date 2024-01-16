#include<stdio.h>
#include<stdlib.h>
void Reverse(int a[],int n)
{
	int *start=a;
	int *end=a+n-1;
	while(start<end)
	{
		int temp;
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}

int main()
{
	int n;
	printf("Enter the number of numbers in the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values in the array : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	Reverse(a,n);
	printf("Array after reversing : ");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}