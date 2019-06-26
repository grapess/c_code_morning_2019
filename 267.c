#include<stdio.h>
struct Student
{
	char name[40];
	int rollno;
	float average;
};
typedef struct Student STU;
int main()
{
	FILE *file;
	STU stu;
	file = fopen("records.txt","a");
	if( file == NULL )
	{
		printf("\n Failed in Open File \n");
	}
	else
	{
		printf("\n Enter Name : ");
		gets( stu.name );
		printf("\n Enter Roll No : ");
		scanf("%d",&stu.rollno);
		printf("\n Enter Average : ");
		scanf("%f",&stu.average);
		fprintf( file , "%s %d %f\n",stu.name,stu.rollno,stu.average);
		fclose( file );
	}
	return 0;
}