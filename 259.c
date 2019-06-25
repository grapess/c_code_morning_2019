#include<stdio.h>
void binary( int num )
{
	if( num > 0 )
	{
		binary( num / 2 );
		printf("%d ",num % 2 );
	}
}
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Binary Form of num : ");
	binary( num );
	printf("\n");
	return 0;
}