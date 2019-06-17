#include<stdio.h>
#pragma pack(1)
struct Student
{
	int rollno;
	char name;
};
int main()
{
	struct Student st;
	printf("\n Size : %d \n",sizeof(st));
	return 0;
}