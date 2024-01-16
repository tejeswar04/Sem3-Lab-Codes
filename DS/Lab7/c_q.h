typedef struct{
	int data[10];
	int f;
	int r;
}cq;
int isFull(cq *c)
{
	if((c->f==0&&c->r==9)||(c->f==c->r+1))
		return 1;
	return 0;
}
int isEmpty(cq *c)
{
	if(c->f==-1)
		return 1;
	return 0;
}
void Eq(int x,cq *c)
{
	if(isFull(c))
	{
		printf("Circular queue is Full\n");
	}
	else{
		if(c->f==-1)
			c->f=0;
		c->r=(c->r+1)%10;
		c->data[c->r]=x;
	}
}
int Dq(cq *c)
{
	int ele;
	if(isEmpty(c))
	{
		printf("queue is empty\n");
		return -1;
	}
	else{
		ele=c->data[c->f];
		if(c->f==c->r)
		{
			c->f=-1;
			c->r=-1;
		}
		else{
			c->f=(c->f+1)%10;
		}
		return ele;
	}
}
void display(cq c)
{
	if(c.f==-1)
	{
		printf("Circular Queue is empty\n");
	}
	else{
		int i=0;
		printf("Ele are : ");
		for(i=c.f;i!=c.r;i=(i+1)%10)
			printf("%d\t",c.data[i]);
		printf("%d\n",c.data[i]);
	}
}