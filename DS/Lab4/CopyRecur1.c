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
	fflush(stdin);
	scanf("%[\n]", sc);
	printf("hi");
	char*des=(char *)malloc(n*sizeof(char));
	des=Copy(sc,des,n,0);
	printf("THe copied string is : ");
	for(int i=0;i<n;i++)
		printf("%c ",des[i]);
}