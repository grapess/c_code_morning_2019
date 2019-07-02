#include<stdio.h>
#include<stdlib.h>
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
	FILE *fp,*ft;
	int rollno, found;
	fp = fopen("students.txt","rb");
	ft = fopen("temp.txt","wb");
	if( fp == NULL || ft == NULL )
	{
		printf("\n Failure in Opening \n");
	}
	else
	{
		printf("\n Enter Roll No to be Deleted : ");
		scanf("%d",&rollno);
		found = 0;
		while( fread( &stu, sizeof(stu) , 1 , fp) == 1 )
		{
			if( stu.rollno == rollno )
			{
				found = 1;
			}
			else
			{
				fwrite( &stu , sizeof(stu) , 1,  ft );
			}
		}
		fclose(fp);
		fclose(ft);
		if( found == 1 )
		{
			remove("students.txt");
			rename("temp.txt","students.txt");
			printf("\n Record is Removed \n");
		}
		else
		{
			remove("temp.txt");
			printf("\n There is no Record for Given Roll No \n");
		}
	}
	return 0;
}