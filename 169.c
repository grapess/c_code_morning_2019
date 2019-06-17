#include<stdio.h>
void sum_difference( int n1 , int n2 , int *ans1 , int *ans2 )
{
	*ans1 = n1 + n2;
	*ans2 = n1 - n2;
}
int main()
{
	int n1,n2,res1,res2;
	printf("\n Enter Any Number : ");
	scanf("%d",&n1);
	printf("\n Enter Any Number : ");
	scanf("%d",&n2);
	sum_difference( n1, n2, &res1 , &res2 );
	printf("\n Sum : %d Difference : %d \n",res1,res2);
	return 0;
}
