#include<stdio.h>
struct Senior
{
	float bonus;
	float ta;
};
struct Junior
{
	float da;
	float hra;
};
union Emp_type
{
	struct Senior sen;
	struct Junior jun;
};
struct Employee
{
	int code;
	union Emp_type type;
};
int main()
{
	struct Employee emp;
	printf("\n Size : %d \n",sizeof(emp));
	return 0;
}