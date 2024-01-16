#include<stdio.h>
#include "c_q.h"

int main()
{
	cq c;
	c.f=-1;
	c.r=-1;
	Dq(&c);
	Eq(7,&c);
	printf("%d\t%d",c.f,c.r);
	display(c);
	Eq(8,&c);
	Eq(9,&c);
	Eq(10,&c);
	Dq(&c);
	display(c);
}