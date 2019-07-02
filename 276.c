#include<stdio.h>
#include<stdarg.h>
int sum( int , ... );
int main()
{
	printf("\n Sum : %d \n",sum(2,11,22));
	printf("\n Sum : %d \n",sum(4,33,44,11,22));
	printf("\n Sum : %d \n",sum(7,11,22,33,44,55,66,77));
	return 0;
}
int sum( int total , ... )
{
	int result = 0;
	int count,value;
	va_list ptr;
	va_start( ptr, total );
	for( count = 1; count <= total; count++ )
	{
		value = va_arg( ptr, int);
		result += value;
	}
	return result;
}