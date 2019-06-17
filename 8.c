#include<stdio.h>
int main()
{
	int num,sum,rem,temp;
	printf("\n Enter Any Five Digit Number : ");
	scanf("%d",&num);
	
	temp = num;
	
	rem = temp % 10;
	sum = rem;
	temp = temp / 10;
	
	rem = temp % 10;
	sum = sum + rem;
	temp = temp / 10;
	
	rem = temp % 10;
	sum = sum + rem;
	temp = temp / 10;
	
	rem = temp % 10;
	sum = sum + rem;
	temp = temp / 10;
	
	rem = temp % 10;
	sum = sum + rem;
	temp = temp / 10;
	
	printf("\n Sum of Digit of Given Number [ %d ] : %d \n",num,sum);
	return 0;
}