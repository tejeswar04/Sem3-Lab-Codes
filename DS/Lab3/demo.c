#include<stdio.h>
//printf("Hello");
main()
{
	int a[2][2]={10,11,12,13};
	int *ptr=a;
	printf("%d",*(ptr+2));
}