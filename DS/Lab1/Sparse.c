#include<stdio.h>
#include<stdlib.h>
int ** CreateAMatrix(int r,int c)
{
	int **matrix=(int **)malloc(r*sizeof(int));
	for(int i=0;i<c;i++)
		matrix[i]=(int *)malloc(c*sizeof(int));
	printf("Enter the elements ");
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&matrix[i][j]);
	return matrix;
}
int SparseOrNot(int **mat,int r,int c)
{
	int count=0;
	int value=r*c;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			if(mat[i][j]==0)
				count++;
	if(count>(value/2))
		return 1;
	else
		return 0;
}
int main()
{
	int r,c;
	printf("Enter the rows and columns of the matrix ");
	scanf("%d%d",&r,&c);
	int **mat=CreateAMatrix(r,c);
	//printf("Enter the elements ");
	/*
	int mat[r][c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&mat[i][j]);
	*/
	SparseOrNot(mat,r,c)?printf("Yes, it is Sparse"):printf("NO, It is not sparse");
    return 0;	
}