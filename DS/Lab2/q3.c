#include<stdio.h>
#include<stdlib.h>
int *make(int n)
{
	int *a=(int *)malloc(n*sizeof(int));
	return a;
}
void multiply(int *p)
{
	*p=*p*2;
}
void Multiply(int **p)
{
	**p=**p*2;
}
int main()
{
	int o=2;
	int *q=&o;
	printf("Passing pointer to a function\n");
	printf("Values before passing : %d\n",*q);
	multiply(q);
	printf("Values after passing : %d\n",*q);

	printf("Returning a pointer from a function, creating an array \n");
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int *a=make(n);
	printf("Enter the elements : ");
	int *p=a;
	int *e=a+n;
	for(;p<e;p++)
		scanf("%d",p);
	p=a;
	printf("Array elements are : ");
	while(p<e)
	{
		printf("%d ",*p);
		p++;
	}

	printf("\nUsing pointer to pointer, to multiply the number itself by 2\n");
	int h=2;
	q=&h;
	int **r=&q;
	printf("Values before passing : %d\n",**r);
	Multiply(r);
	printf("Values after passing : %d\n",**r);

}