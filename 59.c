#include<stdio.h>
int main()
{
	int * iptr;
	float * fptr;
	char * cptr;
	double * dptr;
	long * lptr;
	long double * ldptr;
	printf("\n Size of iptr : %d \n",sizeof(iptr));
	printf("\n Size of fptr : %d \n",sizeof(fptr));
	printf("\n Size of cptr : %d \n",sizeof(cptr));
	printf("\n Size of dptr : %d \n",sizeof(dptr));
	printf("\n Size of lptr : %d \n",sizeof(lptr));
	printf("\n Size of ldptr : %d \n",sizeof(ldptr));
	return 0;
}