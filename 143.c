#include<stdio.h>
#include<math.h>
int main()
{
	int n1= 11;
	int n2 = 54;
	int n3 = 543;
	float result;
	printf("\n %10d %10d %10d \n",n1,n2,n3);
	printf("\n %-10d %-10d %-10d \n",n1,n2,n3);
	result = sqrt( 5 );
	printf("\n Result : %f \n",result);
	printf("\n Result : %.2f \n",result);
	printf("\n Result : %10.2f Work \n",result);
	printf("\n Result : %-10.2f Work \n",result);
	return 0;
}