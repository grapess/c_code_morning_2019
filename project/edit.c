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
	FILE *fp;
	int rollno, found , recsize;
	fp = fopen("students.txt","rb+");	
	if( fp == NULL )
	{
		printf("\n Failure in Opening \n");
	}
	else
	{
		recsize = sizeof(stu);
		printf("\n Enter Roll No to be Edited : ");
		scanf("%d",&rollno);
		found = 0;
		while( fread( &stu, recsize , 1 , fp) == 1 )
		{
			if( stu.rollno == rollno ) // strcmp(stu.name,name) == 0
			{
				found = 1;
				break;
			}
		}
		
		if( found == 1 )
		{
			printf("\n Previous Details : ");
			show( stu );
			fflush(stdin);
			printf("\n Enter New Name : ");
			gets( stu.name );
			printf("\n Enter New Average : ");
			scanf("%f",&stu.average);
			fseek( fp , -recsize , SEEK_CUR );
			fwrite( &stu , recsize , 1 , fp );
			printf("\n Record is Updated \n");
		}
		else
		{
			printf("\n There is no Record for Given Roll No \n");
		}
		fclose(fp);
	}
	return 0;
}