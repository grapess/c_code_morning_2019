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
struct Employee
{
	int code;
	struct Senior sen;
	struct Junior jun;
};
int main()
{
	struct Employee emp;
	printf("\n Size : %d \n",sizeof(emp));
	return 0;
}