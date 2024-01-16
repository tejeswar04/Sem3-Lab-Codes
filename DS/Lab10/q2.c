#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node{
	struct Node* prev;
	int val;
	struct Node* next;
}Node;

Node* create(int n){
	Node* h=(Node*)malloc(sizeof(Node));
	Node* temp;
	h->val=-999;
	int i=0;
	while(n){
		int a=n%10;
		Node*t=(Node*)malloc(sizeof(Node));
		t->val=a;
		if(i==0){
			h->prev=t;
			h->next=t;
			t->next=h;
			t->prev=h;
			i++;
		}
		else{
			temp=h->next;
			t->next=temp;
			t->prev=h;
			temp->prev=t;
			h->next=t;
		}
		n=n/10;
	}
	return h;
}

Node* add(Node*h1,Node*h2){
	int c=0;
	Node* temp1=h1->prev;
	Node* temp2=h2->prev;
	while(temp2->prev!=h2){
		temp1->val=temp1->val+temp2->val+c;
		if(temp1->val>10){
			c=1;
			temp1->val=temp1->val%10;
		}
		temp1=temp1->prev;
		temp2=temp2->prev;
	}
	temp1->val=temp1->val+temp2->val+c;
	return h1;
}

void display(Node* h){
	Node* temp=h->next;
	while(temp->next!=h){
		printf("%d\t",temp->val);
		temp=temp->next;
	}
	printf("%d\n",temp->val);
}

int main(){
	int n,m;
	Node*t;
	printf("Enter numbers : ");
	scanf("%d %d",&n,&m);
	Node*h1=create(n);
	Node*h2=create(m);
	display(h1);
	display(h2);
	int l1,l2;
	l1=0;
	while(n){
		l1++;
		n=n/10;
	}
	l2=0;
	while(m){
		l2++;
		m=m/10;
	}
	if(l1>l2)
		t=add(h1,h2);
	else
		t=add(h2,h1);
	display(t);	
}