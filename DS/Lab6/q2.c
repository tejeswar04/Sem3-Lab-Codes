#include<stdio.h>
#include <string.h>
#include "Stack_char.h"
stack st;

int pre(char x)
{
    switch (x)
    {
    case '(':
    case ')':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    }
}

void main()
{
	char infix[100];
	st.tops=-1;
	printf("Enter an infix expression : ");
	scanf("%s",infix);
	char revinfix[strlen(infix)],prefix[strlen(infix)],ch;
	int j=0;
	for(int i=strlen(infix)-1;i>=0;i--,j++)
		revinfix[j]=infix[i];
	revinfix[j]='\0';
	j=0;
	int i=0;
	while((ch=revinfix[i++])!='\0')
	{
		switch(ch)
		{
		case ')':
			push(ch,&st);
			break;
		case '(':
			while(top(st)!=')')
			{
				prefix[j++]=pop(&st);
			}
			pop(&st);
			break;
		case '+':
		case '-':
		case '*':
		case '/':
			while(pre(top(st))>pre(ch))
			{
				prefix[j++]=pop(&st);
			}
			push(ch,&st);
			break;
		default:
			prefix[j++]=ch;
		}
	}
	while(!(isEmpty(&st)))
		prefix[j++]=pop(&st);
	prefix[j]='\0';
	char revprefix[strlen(prefix)];
	j=0;
	for(i=strlen(prefix)-1;i>=0;i--,j++)
		revprefix[j]=prefix[i];
	revprefix[j]='\0';
	printf("prefix is %s",revprefix);
}