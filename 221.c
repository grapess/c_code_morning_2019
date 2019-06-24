#include<stdio.h>
#include<string.h>
int main()
{
	char *name = "Welcome";
	char str[] = "Good";
	//str = "Hello";
	strcpy( str, "Hello");
	name = "Hello";
	return 0;
}