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
	file = fopen("records.txt","r");
	if( file == NULL )
	{
		printf("\n Failed in Open File \n");
	}
	else
	{
		
		while(fscanf( file , "%s %d %f\n",stu.name,&stu.rollno,&stu.average)!=EOF)
		{
			printf("\n [ Roll No : %d ] [ Name : %s ] [ Average : %f ] \n",stu.rollno,stu.name,stu.average);
		}
		fclose( file );
	}
	return 0;
}