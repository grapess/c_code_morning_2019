#include<stdio.h>
#include<math.h>
int main()
{
	double num,result;
	printf("\n Enter Any Number : ");
	scanf("%lf",&num);
	result = ceil( num );
	printf("\n Ceil : %lf \n",result);
	result = floor( num );
	printf("\n Floor : %lf \n",result);
	return 0;
}