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
	struct Student stu[2];
	int i;
	for( i = 0; i < 2; i++ )
	{
		printf("\n Enter Roll No : ");
		scanf("%d",&stu[i].rollno);
		fflush(stdin);
		printf("\n Enter Name : ");
		gets(stu[i].name);
		printf("\n Enter average : ");
		scanf("%f",&stu[i].average);
	}
	for( i = 0; i < 2; i++ )
	{
		show( stu[i]);
	}
	return 0;
}