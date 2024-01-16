#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int day;
	char *mon;
	int year;
}DOB;
typedef struct{
	int reg_no;
	char *name;
	char *add;
}STU_info;
typedef struct{
	char *college_name;
	char *univ_name;
}College;
typedef struct{
	DOB* d;
	STU_info* s;
	College* c;
}student;
void read_dob(student *stu)
{
	char str[100],c;
	printf("Enter date, mon, year : ");
	scanf("%d",&(stu->d->day));
	scanf("%c",&c);
	//printf("%d",(stu->d->day));
	printf("M : ");
	gets(str);
	//scanf(" %s",str);
	stu->d->mon=(char *)malloc(strlen(str));
	strcpy(stu->d->mon,str);
	//printf("%s",(stu->d->mon));
	printf("Y : ");
	scanf("%d",&(stu->d->year));
}
void read_StuInfo(student *stu)
{
	char c,str[100];
	printf("Enter reg_no, name, address");
	scanf("%d",&(stu->s->reg_no));
	scanf("%c",&c);
	//fflush(stdin);
	printf("n : ");
	//gets(stu->s->name);
	gets(str);
	stu->s->name=(char *)malloc(strlen(str));
	strcpy(stu->s->name,str);
	//puts(stu->s->name);
	//scanf("%c",&c);
	printf("a : ");
	//fflush(stdin);
	//gets(stu->s->add);
	gets(str);
	stu->s->add=(char *)malloc(strlen(str));
	(stu->s->add,str);
	//scanf("%c",&c);
}
void read_college(student *stu)
{
	char c,str[100];
	printf("Enter name of College and univ : ");
	gets(str);
	//scanf("%c",&c);
	stu->c->college_name=(char *)malloc(strlen(str));
	strcpy(stu->c->college_name,str);
	//fflush(stdin);
	//gets(stu->c->college_name);
	//scanf("%c",&c);
	//fflush(stdin);
	//gets(stu->c->univ_name);
	gets(str);
	//scanf("%c",&c);
	stu->c->univ_name=(char *)malloc(strlen(str));
	strcpy(stu->c->univ_name,str);
	//scanf("%c",&c);
}
void display(student *stu)
{
	printf("name : ");
	puts(stu->s->name);
	printf("reg_no : %d\n",stu->s->reg_no);
	printf("Addres : ");
	puts(stu->s->add);
	printf("DOB is : %d -",stu->d->day);
	printf(" %s -",stu->d->mon);
	printf(" %d\n",stu->d->year);
	printf("College name : ");
	puts(stu->c->college_name);
	printf("Unic : ");
	puts(stu->c->univ_name);
}
int main()
{
	student *stu=(student *)malloc(1*sizeof(student));
	stu->d=(DOB *)malloc(sizeof(DOB));
	stu->c=(College *)malloc(sizeof(College));
	stu->s=(STU_info *)malloc(sizeof(STU_info));
	if(stu==NULL)
		printf("NULL");
	read_dob(stu);
	read_StuInfo(stu);
	read_college(stu);
	display(stu);
}