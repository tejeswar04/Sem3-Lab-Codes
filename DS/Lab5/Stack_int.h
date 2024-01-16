#define Max 100
#define true 1
#define false 0
typedef struct{
	int data[Max];
	int tops;
}stack;
void push(int x,stack *s)
{
	if(s->tops!=Max-1)
		s->data[++(s->tops)]=x;
	else
		printf("Stack overflow");
}
int pop(stack *s)
{
	if(s->tops!=-1)
	{
		return s->data[(s->tops)--];
	}
	else
		printf("Stack underflow");
	return -1;
}
int isEmpty(stack *s)
{
	if(s->tops==-1)
		return (true);
	else
		return (false);
}
int isFull(stack *s)
{
	return (!isEmpty(s));
}
void display(stack s)
{
	int j=s.tops;
	for(int i=j;i>=0;i--)
		printf("%d\n",s.data[j]);
}
int top(stack s)
{
	return s.data[s.tops];
}