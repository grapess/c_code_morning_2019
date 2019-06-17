#include<stdio.h>
#include<math.h>
int main()
{
	double num,result;
	printf("\n Enter Any Number : ");
	scanf("%lf",&num);
	result = sqrt( num );
	printf("\n Square Root : %lf \n",result);
	result = pow( num , 3 );
	printf("\n Cube of Given Number : %lf \n",result);
	return 0;
}