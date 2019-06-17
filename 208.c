#include<stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
struct Student
{
	int rollno;
	char name[40];
	float average;
	struct Date dob;
};
typedef struct Student STU;
void show( STU st )
{
	printf("\n [ Roll No : %d ] [ Name : %s ] [ Average : %.2f ] \n",st.rollno,st.name,st.average);
	printf("\n Date of Birth : %d-%d-%d \n",st.dob.year,st.dob.month,st.dob.day);
}
int main()
{
	STU stu = { 1001 , "Mahesh Yadav" , 87.67 , 1998 , 5 , 6 };
	show( stu );
	return 0;
}