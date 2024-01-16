#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int arr[10];
	int tops;
}st;
void ini(st*in,st*out)
{
	in->tops=-1;
	out->tops=-1;
}
int isFull(st s)
{
	if(s.tops==9)
		return 1;
	return 0;
}
int isEmpty(st s)
{
	if(s.tops==-1)
		return 1;
	return 0;
}
void push(st*s,int x)
{
	if(!isFull(*s))
		s->arr[++s->tops]=x;
	else
		printf("Stack is Full");
}
int pop(st*s)
{
	if(!isEmpty(*s))
		return s->arr[s->tops--];
	else
		printf("Stack is Empty");
}
void display(st in,st out)
{
	int t=out.tops;
	while(t>=0)
	{
		printf("%d\t",out.arr[t]);
		t--;
	}
	t=0;
	while(t<=in.tops)
	{
		printf("%d\t",in.arr[t]);
		t--;
	}
}
void enqueue(st*in,int x)
{
	push(in,x);
}
int dequeue(st*in,st*out)
{
	if(!(isEmpty(*out)))
	{
		return pop(out);
	}
	else
	{
		while(!(isEmpty(*in)))
			push(out,pop(in));
		return pop(out);
	}
}

int main()
{
	st in,out;
	ini(&in,&out);
	int inp,x;
	printf("1-enqueue\n2-dequeue\n3-display\npress any char for stop");
	while(scanf("%d",&inp))
	{
		switch(inp)
		{
			case 1:
				printf("Enter input : ");
				scanf("%d",&x);
				enqueue(&in,x);
				break;
			case 2:
				printf("The deleted element is %d",dequeue(&in,&out));
				break;
			case 3:
				display(in,out);
				break;
		}
		printf("next command - ");
	}

}