#include <stdio.h>
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
void Multipy(int **matA,int **matB,int r1,int c2,int c1)
{
	int mat[r1][c2];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			mat[i][j]=0;
			for(int k=0;k<c1;k++)
			{
				mat[i][j]=mat[i][j]+matA[i][k]*matB[k][j];
			}
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int r1,c1,r2,c2;
	printf("Enter order of matrix A");
	scanf("%d %d",&r1,&c1);
	int **matA=CreateAMatrix(r1,c1);
	printf("Enter order of matrix B");
	scanf("%d %d",&r2,&c2);
	int **matB=CreateAMatrix(r2,c2);
	(c1!=r2)?printf("Not POssible"):Multipy(matA,matB,r1,c2,c1);
}