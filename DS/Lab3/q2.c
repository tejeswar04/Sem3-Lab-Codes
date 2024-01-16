#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char name[50];
	int roll_number;
	float CGPA;
}student;
void read(student*s)
{
	fflush(stdin);
	char c;
	scanf("%c",&c);
	printf("Enter the name : ");
	gets(s->name);
	printf("Enter roll_number : ");
	scanf("%d",&s->roll_number);
	printf("Enter CGPA : ");
	scanf("%f",&s->CGPA);
}
void display(student *s)
{
	printf("name : ");
	puts(s->name);
	printf("roll_number : %d\n",s->roll_number);
	printf("CGPA : %f\n",s->CGPA);
}
void sort(student *stu,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((stu+j)->roll_number<(stu+i)->roll_number)
			{
				student temp;
				temp=*(stu+i);
				*(stu+i)=*(stu+j);
				*(stu+j)=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	student * stu=(student *)malloc(n*sizeof(student));
	printf("Enter details : \n");
	for(int i=0;i<n;i++)
		read((stu+i));
	sort(stu,n);
	printf("Details of students post sorting \n");
	for(int i=0;i<n;i++)
		display((stu+i));
}