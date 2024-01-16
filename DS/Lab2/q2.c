#include<stdio.h>
#include<stdlib.h>
int *make(int n)
{
	int *a=(int *)malloc(n*sizeof(int));
	return a;
}
int *smallest(int *a,int n)
{
	int *s=a,*sm=a,*e=a+n-1;
	while(s<=e)
	{
		if(*s<*sm)
			sm=s;
		s++;
	}
	return sm;
}

int main()
{
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int *a=make(n);
	printf("Enter the elements : ");
	int *p=a;
	int *e=a+n;
	for(;p<e;p++)
		scanf("%d",p);
	int *s=smallest(a,n);
	printf("Smallest is %d",*s);
}