#include<stdio.h>
int main()
{
	int age,health,living,gender;
	printf("\n Enter Person Age : ");
	scanf("%d",&age);
	printf("\n Press 1 For Male 2 For FeMale ");
	printf("\n Enter Person Gender : ");
	scanf("%d",&gender);
	printf("\n Press 1 For Excellent 2 For Poor ");
	printf("\n Enter Person Health Status : ");
	scanf("%d",&health);
	printf("\n Press 1 For City 2 For Village ");
	printf("\n Enter Person Living Area : ");
	scanf("%d",&living);
	if( age >= 25 && age <= 35 )
	{
		if( health == 1 && gender == 1 && living == 1 )
		{
			printf("\n The premium is Rs. 4 per thousand ");
			printf("\n The policy amount cannot exceed Rs. 2 lakhs \n");
		}
		else if( health == 1 && gender == 2 && living == 1 )
		{
			printf("\n The premium is Rs. 3 per thousand ");
			printf("\n The policy amount cannot exceed Rs. 1 lakh \n");
		}
		else if( health == 2 && gender == 1 && living == 2 )
		{
			printf("\n The premium is Rs. 6 per thousand ");
			printf("\n The policy amount cannot exceed Rs. 10000 \n");
		}
		else
		{
			printf("\n Person cannot be insured \n");
		}
	}
	else
	{
		printf("\n Person cannot be insured \n");
	}
	return 0;
}