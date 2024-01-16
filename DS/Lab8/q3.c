#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char *q;
	int f,r,s;
}Queue;

void enqueu(Queue* q,char c){
	if(q->f==-1)
		q->f=0;
	if(q->r<q->s-1){
		q->r++;
		q->q[q->r]=c;
	}
}

char dequeue(Queue* q){
	return q->q[q->r--];
}
void display(Queue q){
	for(int i=q.f;i<=q.r;i++)
		printf("%c",q.q[i]);
	printf("\n");
}
int main(){
	Queue q;
	q.f=q.r=-1;
	printf("Enter n : ");
	scanf("%d",&q.s);
	char c;
	scanf("%c",&c);
	printf("Enter string : ");
	char s[50];
	scanf("%s",s);
	int x;
	x=(strlen(s)/2)-1;
	q.q=(char *)malloc((strlen(s))*sizeof(char));
	for(int i=0;i<=x;i++)
		enqueu(&q,s[i]);
	if(strlen(s)%2==0)
		x=x+1;
	else
		x=x+2;
	for(;x<strlen(s);x++){
		if(s[x]!=dequeue(&q)){
			printf("NotPalin\n");
			end(0);
		}
	}
	printf("Palin");
}