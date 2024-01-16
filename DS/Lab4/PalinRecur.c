#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
bool Palin(char sc[],int i,int n)
{
	if(i>=n/2)
		return true;
	if(sc[i]==sc[n-1-i])
		return Palin(sc,i+1,n);
	else
		return false;
}
int main()
{
	/*
	int n;
	printf("Enter the length of the string : ");
	scanf("%d",&n);*/
	char sc[30];
	fflush(stdin);
	printf("Enter the characters : ");
	/*
	for(int i=0;i<n;i++)
		scanf(" %c",&sc[i]);*/
	scanf("%[^\n]s",sc);
	if(Palin(sc,0,strlen(sc)))
		printf("It is a Palindrome");
	else
		printf("It is not a Palindrome");
}