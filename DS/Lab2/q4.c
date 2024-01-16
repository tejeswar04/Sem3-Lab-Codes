#include<stdio.h>
#include<stdlib.h>

int **create(int r,int c)
{
	int **mat=(int **)malloc((r+1)*sizeof(int *));
	for(int i=0;i<r;i++){
		mat[i]=(int *)malloc((c+1)*sizeof(int));
		*(*(mat+i)+0)=c;
	}
	mat[r]=NULL;
	return mat;
}
void read(int **mat)
{
	int i=0;
	while(*(mat+i)!=NULL)
	{
		int c=*(*(mat+i)+0);
		for(int j=1;j<=c;j++)
			scanf("%d",(*(mat+i)+j));
		i++;
	}
}
void display(int **mat)
{
	int i=0;
	while(*(mat+i)!=NULL)
	{
		int c=*(*(mat+i)+0);
		for(int j=1;j<=c;j++)
			printf("%d\t",*(*(mat+i)+j));
		printf("\n");
		i++;
	}
}
int ** Multiply(int **matA,int **matB)
{
	int ra=0;
	while(*(matA+ra)!=NULL)
		ra++;
	int rb=0;
	while(*(matB+rb)!=NULL)
		rb++;
	int ca=*(*(matA+0)+0);
	int cb=*(*(matB+0)+0);
	//printf("%d %d %d %d",ra,rb,ca,cb);
	if(rb!=ca){
		printf("Multiply is not possible\n");
		end(0);
	}
	
	int **res=create(ra,cb);
	for(int i=0;i<ra;i++)
	{
		for(int j=1;j<=cb;j++)
		{
			*(*(res+i)+j)=0;
			for(int k=1;k<=ca;k++)
			{
				res[i][j]=res[i][j]+matA[i][k]*matB[k-1][j];
			}
		}
	}
	return res;
}
int main()
{
	int r1,c1,r2,c2;
	printf("Enter order of matrix A");
	scanf("%d %d",&r1,&c1);
	int **matA=create(r1,c1);
	printf("Enter order of matrix B");
	scanf("%d %d",&r2,&c2);
	int **matB=create(r2,c2);
	read(matA);
	read(matB);
	int **res=Multiply(matA,matB);
	display(res);
}