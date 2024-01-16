#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int count=0;
void Tower(int n,char from,char to,char aux)
{
	if(n==1){
		printf("%c -> %c\n",from,to);
		count++;
		return;
	}
	Tower(n-1,from,aux,to);
	printf("%c -> %c\n",from,to);
	count++;
	Tower(n-1,aux,to,from);
}

int main()
{
	char sr,des,aux;
	sr='a';
	des='c';
	aux='b';
	int n;
	printf("No of rings in the tower : ");
	scanf("%d",&n);
	printf("\n");
	Tower(n,sr,des,aux);
	printf("%d",count);
}