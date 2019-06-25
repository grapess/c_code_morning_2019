#include<stdio.h>
int gethcf( int n1 , int n2 )
{
	int J , K, div , result;
	J = n1;
	K = n2;
	div = J / K;
	result = J - div * K;
	while( result != 0 )
	{
		J = K;
		K = result;
		div = J / K;		
		result = J - div * K;
	}
	return K;
}
int main()
{
	int n1,n2,hcf;
	printf("\n Enter Any Number : ");
	scanf("%d",&n1);
	printf("\n Enter Any Number : ");
	scanf("%d",&n2);
	hcf = gethcf( n1 , n2 );
	printf("\n HCF : %d \n",hcf);
	return 0;
}