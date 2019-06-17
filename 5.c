#include<stdio.h>
int main()
{
	int n1, n2, ans;
	printf("\n Enter First  Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	ans = n1 + n2;
	printf("\n Sum : %d \n",ans);
	printf("\n [ %d + %d = %d ] \n",n1,n2,ans);
	return 0;
}