#include<stdio.h>
#define PI 3.14
#define AREA(x) PI * x * x
int main()
{
	float radius, area;
	printf("\n Enter Any Radius : ");
	scanf("%f",&radius);
	area = AREA( radius );
	printf("\n The Area of Circle : %f \n",area);
	return 0;
}