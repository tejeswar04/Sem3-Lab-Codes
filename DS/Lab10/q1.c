#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	struct Node* prev;
	int val;
	struct Node* next;
}Node;

Node* insertbeg(Node* h,int val){
	Node*t=(Node*)malloc(sizeof(Node));
	t->next=h;
	t->val=val;
	t->prev=NULL;
	if(!h)
		return t;
	h->prev=t;
	return t;
}

Node* insertend(Node* h,int val){
	Node*temp=h;
	while(temp->next!=NULL)
		temp=temp->next;
	Node*t=(Node*)malloc(sizeof(Node));
	t->val=val;
	temp->next=t;
	t->prev=temp;
	t->next=NULL;
	return h;
}

int delbeg(Node** h){
	Node* temp=*h;
	*h=(*h)->next;
	int a=temp->val;
	free(temp);
	return a;
}

int delend(Node** h){
	Node* temp=*h;
	while(temp->next!=NULL)
		temp=temp->next;
	int a=temp->val;
	temp->prev->next=NULL;
	free(temp);
	return a;
}

void display(Node* h){
	while(h){
		printf("%d\t",h->val);
		h=h->next;
	}
	printf("\n");
}
int main(){
	Node* h=NULL;
	int inp;
	printf("1.insertbeg  2.insertend  3.delbeg  4.delend  -1.end");
	scanf("%d",&inp);
	int x;
	while(inp!=-1){
		if(inp==1){
			scanf("%d",&x);
			h=insertbeg(h,x);
		}
		if(inp==2){
			scanf("%d",&x);
			h=insertend(h,x);
		}
		if(inp==3){
			delbeg(&h);
		}
		if(inp==4){
			delend(&h);
		}
		display(h);
		scanf("%d",&inp);
	}
}