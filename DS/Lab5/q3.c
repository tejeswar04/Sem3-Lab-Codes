#include<stdio.h>
#include<stdlib.h>
#include "Stack_char.h"
#include<string.h>
int main()
{
	stack st;
	char s[50];
	st.tops=-1;
	printf("Enter the string : \n");
	gets(s);
	//scanf("%s",s);
	int i=0;
	for(i=0;i<(strlen(s)/2);i++){
		//printf("Hello\n");
		push(s[i],&st);
	}
	i=(strlen(s)/2);
	for(;i<strlen(s);i++)
	{
		if(s[i]!=pop(&st))
		{
			printf("Not a palindrome\n");
			exit(0);
		}
	}
	printf("Yaay It is a palindrome\n");
}