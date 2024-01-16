#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include "Stack_char.h"
typedef struct{
	char data[30][30];
	int tops;
}stack;
stack st;
void push(char *s)
{
	//st.data[++(st.tops)]=s;
	strcpy(st.data[++(st.tops)],s);
}
char *pop()
{
	return st.data[(st.tops)--];
}
typedef enum{
	plus,minus,mul,divide,mod,eos,operand
}Precedence;

Precedence getToken(char s)
{
	switch(s)
	{
	case '+':
		return plus;
	case '-':
		return minus;
	case '*':
		return mul;
	case '/':
		return divide;
	case '%':
		return mod;
	case '\0':
		return eos;
	default:
		return operand;
	}
}
int main()
{
	char prefix[]="+a/*bc-de";
	char term[2];
	term[1]='\0';
	//stack st;
	st.tops=-1;
	int j=0;
	char op1[strlen(prefix)],op2[strlen(prefix)];
	for(int i=strlen(prefix)-1;i>=0;i--)
	{
		char postfix[strlen(prefix)];
		Precedence c=getToken(prefix[i]);
		if(c==operand){
			term[0]=prefix[i];
			push(term);
		}
		else
		{
			strcpy(op1,pop());
			strcpy(op2,pop());
			strcpy(postfix,op1);
			strcpy(postfix,op2);
			term[0]=prefix[i];
			strcpy(postfix,term);
			push(postfix);
		}
		for(int i=0;i<=st.tops;i++)
			printf("%s\n",st.data[i]);
	}
	printf("postfix is %s",st.data[0]);
	while(st.tops>-1)
		printf("%s",st.data[(st.tops)--]);
}