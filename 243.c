#include<stdio.h>
int main()
{
	int x = 5;
	printf("\n [ %d ] [ %d ] [ %d ] [ %d ] [ %d ] \n",x++,++x,x++,++x,x++);
	// 6 6 8 8 
	// 9 7 9 5
	return 0;
}