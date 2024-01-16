#include<stdio.h>
#include<stdlib.h>
#include "Stack_int.h"

int main()
{
	stack st;
	int n;
	printf("Enter the number of elements in the array : \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int k;
	printf("Enter k : ");
	scanf("%d",&k);
	st.tops=-1;
	for(int i=0;i<n;i++)
	{
		while(k>0&&st.tops!=-1&&top(st)<arr[i])
		{
			k--;
			st.tops--;
		}
		push(arr[i],&st);
	}
	int i=st.tops;
	for(int j=i;j>=0;j--)
		arr[j]=pop(&st);
	for(int j=0;j<=i;j++)
			printf("%d\t",arr[j]);
}