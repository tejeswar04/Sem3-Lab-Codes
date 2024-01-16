#include<stdio.h>
#include<stdlib.h>
typedef struct{
	double r;
	double i;
}comp;
comp add_comp(comp*a,comp*b)
{
	comp res;
	res.r=a->r+b->r;
	res.i=a->i+b->i;
	return res;
}
comp sub_comp(comp*a,comp*b)
{
	comp res;
	res.r=a->r-b->r;
	res.i=a->i-b->i;
	return res;
}
comp mul_comp(comp*a,comp*b)
{
	comp res;
	res.r=(a->r*b->r)-(a->i*b->i);
	res.i=(a->r*b->i)+(a->i*b->r);
	return res;
}
int main()
{
	comp a={5,2};
	comp b={3,-4};
	comp res;
	printf("First complex number is : %f + %fi\n",a.r,a.i);
	printf("Second complex number is : %f + %fi\n",b.r,b.i);
	res=add_comp(&a,&b);
	printf("Addition is : %f + %fi\n",res.r,res.i);
	res=sub_comp(&a,&b);
	printf("Subtraction is : %f + %fi\n",res.r,res.i);
	res=mul_comp(&a,&b);
	printf("Multiplication is : %f + %fi\n",res.r,res.i);
}