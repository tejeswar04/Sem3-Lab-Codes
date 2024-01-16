#define Max 100
#define true 1
#define false 0
typedef struct{
	char data[Max];
	int tops;
}stack;
void push(char x,stack *s)
{
	if(s->tops!=Max-1)
		s->data[++(s->tops)]=x;
	else
		printf("Stack overflow");
}
char pop(stack *s)
{
	if(s->tops!=-1)
	{
		return s->data[(s->tops)--];
	}
	else
		printf("Stack underflow");
	return -1;
}
char isEmpty(stack *s)
{
	if(s->tops==-1)
		return (true);
	else
		return (false);
}
char isFull(stack *s)
{
	return (!isEmpty(s));
}
void display(stack s)
{
	int j=s.tops;
	for(int i=j;i>=0;i--)
		printf("%c\n",s.data[i]);
}