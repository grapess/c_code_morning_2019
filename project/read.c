#include<stdio.h>
struct Student
{
	int rollno;
	char name[40];
	float average;
};
typedef struct Student STU;
void show( STU st )
{
	printf("\n [ Roll No : %d ] [ Name : %s ] [ Average : %.2f ] \n",
				st.rollno , st.name, st.average);
}
int main()
{
	STU stu;
	FILE *fp;
	fp = fopen("students.txt","rb");
	if( fp == NULL )
	{
		printf("\n Failure in Opening \n");
	}
	else
	{
		while( fread( &stu, sizeof(stu) , 1 , fp) == 1 )
		{
			show( stu );
		}
		fclose(fp);
	}
	return 0;
}