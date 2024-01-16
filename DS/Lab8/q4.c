#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int *q;
	int f,r,s;
}Queue;
void enqueu(Queue* q,int c){
	if(q->f==-1)
		q->f=0;
	if(q->r<q->s-1){
		q->r++;
		q->q[q->r]=c;
	}
}
int dequeue(Queue* q){
	int x=q->q[q->f];
	q->f++;
	/*
	if(q->r==q->f){
		q->r=q->f=-1;
	}*/
	return x;
}
void display(Queue q){
	for(int i=q.f;i<=q.r;i++)
		printf("%d",q.q[i]);
	printf("\n");
}
void revQueue(Queue* q){
	if(q->f==q->s-1)
	{
		q->f=q->r=-1;
		return;
	}
	int x=q->q[q->f];
	//printf("%d\n",q->f);
	dequeue(q);
	revQueue(q);
	enqueu(q,x);
}
int main(){
	Queue q;
	q.f=q.r=-1;
	q.s=6;
	q.q=(int *)malloc(q.s*sizeof(int));
	enqueu(&q,1);
	enqueu(&q,2);
	enqueu(&q,3);
	enqueu(&q,4);
	enqueu(&q,5);
	display(q);
	revQueue(&q);
	display(q);
}