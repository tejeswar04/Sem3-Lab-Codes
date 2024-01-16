#include<stdio.h>
#include<stdlib.h>
#include "Stack_int.h"

int main()
{
	stack st;
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	st.tops=-1;
	while(n)
	{
		push(n%2,&st);
		n=n/2;
	}
	int sum=0;
	while(!(isEmpty(&st)))
	{
		sum=sum*10+pop(&st);
	}
	printf("Binary is %d\n",sum);
}