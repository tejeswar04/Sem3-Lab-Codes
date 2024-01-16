#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char** q;
	int f,r,s;
}Queue;

void insertf(Queue* qu,char c[]){
	if(qu->f==-1){
		qu->r=qu->f=0;
	}
	if(qu->f>0){
		qu->f--;
	}
	if(qu->f==0){
		if(qu->r<qu->s-1){
			for(int i=qu->r;i>=qu->f;i--)
				strcpy(qu->q[i+1],qu->q[i]);
			qu->r++;
		}
	}
	strcpy(qu->q[qu->f],c);
}

char* deletef(Queue* qu){
	return qu->q[qu->f++];
}

void insertr(Queue* qu,char c[]){
	if(qu->f==-1)
		qu->f=0;
	if(qu->r<qu->s-1){
		qu->r++;
		strcpy(qu->q[qu->r],c);
	}
}

void display(Queue * qu){
	for(int i=qu->f;i<=qu->r;i++)
		printf("%s\t",qu->q[i]);
	printf("\n");
}

int main(){
	Queue *q,qu;
	q=&qu;
	q->f=q->r=-1;
	q->s=5;
	q->q=(char **)malloc(q->s*sizeof(char *));
	for(int i=0;i<q->s;i++){
		q->q[i]=(char *)malloc(20*sizeof(char));
	}
	insertr(q,"who");
	display(q);
	insertf(q,"why1");
	display(q);
	insertf(q,"why2");
	display(q);
	deletef(q);
	display(q);
}