#include<stdio.h>
#include<math.h>
int main()
{
	double n1,n2,result;
	n1 = 5;
	n2 = 2;
	//result = n1 % n2;
	result = fmod( n1 , n2 );
	printf("\n Result : %lf \n",result);
	return 0;
}