#include<stdio.h>
int main()
{
	int num,rem,rev,temp;
	printf("\n Enter Any Five Digit Number : ");
	scanf("%d",&num);
	
	
	// num = 42345
	temp = num;
	
	rem = temp % 10; // 42345 % 10 = 5
	rev = rem; // rev = 5
	temp = temp / 10; // temp = 42345 / 10 = 4234
	
	rem = temp % 10; // rem = 4234 % 10 = 4
	rev = rev * 10 + rem; // rev = 5 * 10 + 4 = 54
	temp = temp / 10; // temp = 4234 / 10 = 423
	
	rem = temp % 10; // rem = 423 % 10 = 3
	rev = rev * 10 + rem; // rev = 54 * 10 + 3 = 543
	temp = temp / 10; // temp = 423 / 10 = 42
	
	rem = temp % 10;
	rev = rev * 10 + rem;
	temp = temp / 10;
	
	rem = temp % 10;
	rev = rev * 10 + rem;
	temp = temp / 10;
	
	printf("\n Reverse of Given Number : %d \n",rev);
	return 0;
}