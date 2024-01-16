#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int *q;
	int f,r,s;
}Queue;

void apqinsert(Queue* apq,int x){
	if(apq->f==-1)
		apq->f=0;
	apq->r+=1;
	apq->q[apq->r]=x;
}

int apqdelete(Queue *apq){
	int small=apq->q[apq->f];
	int in=apq->f;
	for(int i=apq->f+1;i<=apq->r;i++){
		if(apq->q[i]<small){
			small=apq->q[i];
			in=i;
		}
	}
	for(int i=in+1;i<=apq->r;i++){
		apq->q[i-1]=apq->q[i];
	}
	apq->r--;
	return small;
}

void display(Queue* apq){
	for(int i=apq->f;i<=apq->r;i++)
		printf("%d\t",apq->q[i]);
	printf("\n");
}

int main(){
	Queue apq;
	apq.f=apq.r=-1;
	printf("Enter n : ");
	scanf("%d",&apq.s);
	apq.q=(int *)malloc(apq.s*sizeof(int));
	apqinsert(&apq,8);
	apqinsert(&apq,4);
	apqinsert(&apq,12);
	display(&apq);
	apqdelete(&apq);
	display(&apq);
}