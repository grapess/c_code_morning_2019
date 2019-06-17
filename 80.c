#include<stdio.h>
int main()
{
	int n1, n2, t1, t2, hcf, lcm, rem;
	printf("\n Enter First  Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	t1 = n1;
	t2 = n2;
	while( t1 % t2 != 0 )
	{
		rem = t1 % t2;
		t1 = t2;
		t2 = rem;
	}
	hcf = t2;
	printf("\n HCF of Given Number : %d \n",hcf);
	lcm = ( n1 * n2 ) / hcf;
	printf("\n LCM of Given Number : %d \n",lcm);
	return 0;
}