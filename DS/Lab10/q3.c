#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node{
	struct Node* prev;
	char* s;
	struct Node* next;
}Node;

Node* create(){
	Node*t,*temp;
	int n;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	int i=0;
	while(n+1){
		char str[10];
		gets(str);
		if(i==0){
			t=(Node*)malloc(sizeof(Node));
			t->s=(char*)malloc(strlen(str)*sizeof(char));
			t->prev=NULL;
			t->next=NULL;
			strcpy(t->s,str);
			i++;
			temp=t;
		}
		else{
			Node*s=(Node*)malloc(sizeof(Node));
			s->s=(char*)malloc(strlen(str)*sizeof(char));
			strcpy(s->s,str);
			s->prev=temp;
			temp->next=s;
			s->next=NULL;
			temp=s;
		}
		n--;
	}
	return t;
}

Node* rev(Node* t){
	Node* temp=t->next;
	while(temp->next!=NULL)
		temp=temp->next;
	Node* f=t;
	while((f!=temp)||(f->next=temp)){
		char str[10];
		strcpy(str,f->s);
		strcpy(f->s,temp->s);
		strcpy(temp->s,str);
		temp=temp->prev;
		f=f->next;
	}
	return t;
}

void display(Node*h){
	while(h){
		printf("%s\t",h->s);
		h=h->next;
	}
	printf("\n");
}

int main(){
	Node* h=create();
	display(h);
	h=rev(h);
	display(h);
}