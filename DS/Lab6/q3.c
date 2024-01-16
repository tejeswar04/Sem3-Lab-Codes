#include <stdio.h>
#include <stdlib.h>
#define size 10
typedef struct{
	int data[size];
	int top1;
	int top2;
}stack;
int pop1(stack *st)
{
	if(st->top1>=0)
		return st->data[(st->top1)--];
	else
		printf("Stack 1 underflow\n");
}
int pop2(stack *st)
{
	if(st->top2<size)
		return st->data[(st->top2)++];
	else
		printf("Stack 2 underflow\n");
}
void push1(int x,stack *st)
{
	if(st->top1!=(size/2)-1)
		st->data[++(st->top1)]=x;
	else
		printf("Stack overflow\n");
}
void push2(int x,stack *st)
{
	if(st->top2!=(size/2))
		st->data[--(st->top2)]=x;
	else
		printf("Stack overflow\n");
}
int main()
{
	stack st;
	st.top1=-1;
	st.top2=size;
	push1(3,&st);
	pop2(&st);
	push2(4,&st);
	pop1(&st);
	pop1(&st);
	return 0;
}