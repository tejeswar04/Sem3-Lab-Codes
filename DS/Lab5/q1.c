#include<stdio.h>
#include<stdlib.h>
#include "Stack_char.h"

int main()
{
	char ch;
	stack st;
	st.tops=-1;
	printf("The menu follows in such a way, I to insert,P to pop and D to display, please type CAPS\nTo end the menu type S\n");
	printf("Command : ");
	//printf("%d",scanf("%c",&ch));
	while(scanf("%c",&ch))
	{
		if(ch='S')
			exit(0);
		char s;
		scanf("%c",&s);
		switch(ch)
		{
		case 'I':
			printf("Enter element to push : ");
			scanf("%c",&s);
			push(s,&st);
			scanf("%c",&s);
			break;
		case 'P':
			s=pop(&st);
			printf("The deleted element is %c \n",s);
			break;
		case 'D':
			display(st);
			break;
		}
		printf("Roger that, next command please \n");
		printf("Command : ");
	}
}