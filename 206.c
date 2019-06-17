#include<stdio.h>
struct Student
{
	int rollno;
	char name;
};
union Info
{
	int rollno;
	char name;
};
int main()
{
	struct Student st;
	union Info u;
	printf("\n Size : %d \n",sizeof(st));
	printf("\n Size : %d \n",sizeof(u));
	return 0;
}