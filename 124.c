#include<stdio.h>
void sum1()
{
	int n1,n2,ans;
	n1 = 43;
	n2 = 54;
	ans = n1 + n2;
	printf("\n Sum of Two Number : %d \n",ans);
}
void sum2(int n1,int n2)
{
	int ans = n1 + n2;
	printf("\n Sum of Two Number : %d \n",ans);
}
int sum3( int n1, int n2 )
{
	int ans = n1 + n2;
	return ans;
}
int main()
{
	int result;
	sum1();
	sum2( 11 , 54 );
	sum2( 99 , 43 );
	result = sum3( 543 ,123 );
	printf("\n Sum : %d \n",result);
	printf("\n Sum : %d \n",sum3( 11 , 334 ));
	return 0;
}
