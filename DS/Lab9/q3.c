#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int val;
	Node* next;
}Node;

Node* merge(Node*l1, Node*l2){
	Node** list;
	*list=NULL;
	Node* temp;
	while(l1&&l2){
		if(l1->val<l2->val){
			Node* t=(Node*)malloc(sizeof(Node));
			t->val=l1->val;
			if(!(*list)){
				t->next=NULL;
				*list=t;
				temp=t;
			}
			else{
				temp->next=t;
				t->next=NULL;
				temp=t;
			}
			l1=l1->next;
		}
		else{
			Node* t=(Node*)malloc(sizeof(Node));
			t->val=l2->val;
			if(!(*list)){
				t->next=NULL;
				*list=t;
				temp=t;
			}
			else{
				temp->next=t;
				t->next=NULL;
				temp=t;
			}
			l2=l2->next;
		}
	}
	while(l1){
		Node* t=(Node*)malloc(sizeof(Node));
		t->val=l1->val;
		temp->next=t;
		temp=t;
		l1=l1->next;
	}
	while(l2){
		Node* t=(Node*)malloc(sizeof(Node));
		t->val=l2->val;
		temp->next=t;
		temp=t;
		l2=l2->next;
	}
	return (*list)
}

void display(Node* l){
	while(l){
		printf("%d\t", l->val);
		l=l->next;
	}
	printf("\n");
}

int main(){
	int n1,n2;
	Node* l1=(Node *)malloc(sizeof(Node));
	Node* l2=(Node *)malloc(sizeof(Node));
	scanf("%d %d",&n1,&n2);
	int x;
	for(int i=0;i<n1;i++){
		scanf("%d",&x);
		if(i==0){

		}
	}
}