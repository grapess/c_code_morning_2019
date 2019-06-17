#include<stdio.h>
int main()
{
	int i;
	float f;
	long l;
	double d;
	long double ld;
	long long ll;
	char c;
	printf("\n Size of int : %d \n",sizeof i );
	printf("\n Size of float : %d \n",sizeof (f) );
	printf("\n Size of long : %d \n",sizeof (l) );
	printf("\n Size of double : %d \n",sizeof (d) );
	printf("\n Size of long double : %d \n",sizeof (ld) );
	printf("\n Size of long long : %d \n",sizeof (ll) );
	printf("\n Size of char : %d \n",sizeof (c) );
	return 0;
}