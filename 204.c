#include<stdio.h>
#include<string.h>
struct Student
{
	int rollno;
	char name[40];
	float average;
};
typedef struct Student STU;
void show( STU st )
{
	printf("\n [ Roll No : %d ] [ Name : %s ] [ Average : %.2f ] \n",st.rollno,st.name,st.average);
}
int main()
{
	STU stu = { 1001 , "Mahesh Yadav" , 87.67 };
	show( stu );
	return 0;
}