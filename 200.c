#include<stdio.h>
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
	struct Student stu;
	printf("\n Enter Roll No : ");
	scanf("%d",&stu.rollno);
	fflush(stdin);
	printf("\n Enter Name : ");
	gets(stu.name);
	printf("\n Enter Average : ");
	scanf("%f",&stu.average);
	show( stu );
	return 0;
}