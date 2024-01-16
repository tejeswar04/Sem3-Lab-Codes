#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//int count=0;
bool IsSafe(int n,int board[n][n],int r,int c)
{
	//Checking if a queen is there in that column
	for(int row=0;row<r;row++)
		if(board[row][c]==1)
			return false;
	int row=r;
	int column=c;
	//Left diagonal checking
	while(row>=0&&column>=0)
	{
		if(board[row][column])
			return false;
		row--;
		column--;
	}
	row=r;
	column=c;
	//right diagonal checking 
	while(row>=0&&column<n)
	{
		if(board[row][column])
			return false;
		row--;
		column++;
	}
	return true;
}
int nQueens(int n,int board[n][n],int x)
{
	if(x==n)
	{
		//count++;
		return 1;
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(IsSafe(n,board,x,i))
		{
			board[x][i]=1;
			count+=nQueens(n,board,x+1);
			board[x][i]=0;
		}
	}
	return count;
}
int main()
{
	int n=8;
	int board[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			board[i][j]=0;
	int count=nQueens(n,board,0);
	printf("%d\n",count);

}