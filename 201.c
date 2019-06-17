#include<stdio.h>
#include<string.h>
struct Student
{
	int rollno;
	char name[40];
	float average;
};
void show( struct Student st )
{
	printf("\n [ Roll No : %d ] [ Name : %s ] [ Average : %.2f ] \n",st.rollno,st.name,st.average);
}
int main()
{
	struct Student stu = { 1001 , "Mahesh Yadav" , 87.67 };
	struct Student st,st1;
	show( stu );
	st = stu;
	show( st );
	st1.rollno = stu.rollno;
	st1.average = stu.average;
	strcpy( st1.name , stu.name );
	show( st1);
	return 0;
}