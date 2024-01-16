#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
char *Copy(char sc[],char *des,int n,int i)
{
	des[i]=sc[i];
	if(i==n-1)
		return des;
	else
		return Copy(sc,des,n,i+1);

}

int main()
{
	int n;
	char sc[20];
	for(int i=0;i<20;i++)
		sc[i]='\0';
	//printf("Enter the length of the string : ");
	//scanf("%d",&n);
	printf("Enter the characters : ");
	/*
	for(int i=0;i<n;i++)
		scanf(" %c",&sc[i]);*/
	scanf("%[\n]", sc);
	printf("hi");
	char*des=(char *)malloc(n*sizeof(char));
	for(int i=0;i<n;i++)
		des[i]='\0';
	des=Copy(sc,des,n,0);
	printf("THe copied string is : ");
	for(int i=0;i<n;i++)
		printf("%c ",des[i]);
}