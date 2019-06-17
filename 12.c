#include<stdio.h>
int main()
{
	float ans;
	ans = 4 / 3;
	printf("\n Answer : %f \n",ans);
	ans = 4 / 3.0F;
	printf("\n Answer : %f \n",ans);
	ans = 4 / 3 * 4.5;
	printf("\n Answer : %f \n",ans);
	ans = 4 / 3.0F * 4.5;
	printf("\n Answer : %f \n",ans);
	return 0;
}