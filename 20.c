#include<stdio.h>
#include<math.h>
int main()
{
	double num,result;
	printf("\n Enter Any Number : ");
	scanf("%lf",&num);
	result = log10( num );
	printf("\n Log 10 : %lf \n",result);
	result = ceil(log10( num ));
	printf("\n Total Digit : %lf \n",result);
	return 0;
}