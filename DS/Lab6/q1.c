#include<stdio.h>
#include "Stack_int.h"
#include<string.h>
stack st;
typedef enum{
	lpren,rpren,plus,minus,mul,divide,mod,eos,operand
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
	case '(':
		return lpren;
	case ')':
		return rpren;
	default:
		return operand;
	}

}
int eval(char expr[])
{
	Precedence token;
	int i=0,c,op1,op2;
	st.tops=-1;
	char s=expr[i];
	token=getToken(s);
	while(token!=eos)
	{
		if(token==operand)
		{
			c=s-'0';
			push(c,&st);
		}
		else
		{
			op2=pop(&st);
			op1=pop(&st);
			if(token==plus)
				push(op2+op1,&st);
			else if(token==minus)
				push(op2-op1,&st);
			else if(token==mul)
				push(op2*op1,&st);
			else if(token==divide)
				push(op2/op1,&st);
			else if(token==mod)
				push(op2%op1,&st);
		}
		i++;
		s=expr[i];
		token=getToken(s);
		display(st);
	}
	return top(st);

}
int main()
{
	char exp[100];
	printf("Enter the String : ");
	scanf("%s",exp);
	int j=0;
	char expr[strlen(exp)];
	for(int i=strlen(exp)-1;i>=0;i--,j++)
		expr[j]=exp[i];
	printf("Value is %d",eval(expr));
}