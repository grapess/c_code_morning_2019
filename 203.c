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
	struct Student *ptr;
	printf("\n [ %u ] [ %u ] [ %u ] \n",&stu.rollno,stu.name,&stu.average);
	ptr = &stu;
	printf("\n [ Roll No : %d ] [ Name : %s ] [ Average : %.2f ] \n",ptr->rollno,ptr->name,ptr->average);
	printf("\n [ %d ] \n", (*ptr).rollno );
	return 0;
}