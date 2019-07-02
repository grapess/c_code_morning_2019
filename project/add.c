#include<stdio.h>
struct Student
{
	int rollno;
	char name[40];
	float average;
};
typedef struct Student STU;
int main()
{
	STU stu;
	FILE *fp;
	fp = fopen("students.txt","ab");
	if( fp == NULL )
	{
		printf("\n Failure in Opening \n");
	}
	else
	{
		printf("\n Enter Roll No : ");
		scanf("%d",&stu.rollno);
		fflush(stdin);
		printf("\n Enter Name : ");
		gets(stu.name);
		printf("\n Enter Average : ");
		scanf("%f",&stu.average);
		fwrite( &stu, sizeof(stu) , 1 , fp);
		fclose(fp);
	}
	return 0;
}