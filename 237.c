#include<stdio.h>
int main()
{
	int i = 19;
	char ch = 'G';
	float num = 54.65F;
	int j;
	char c;
	float f;
	char str[80];
	sprintf( str, "%d %c %f",i,ch,num);
	printf("\n String : %s \n",str);
	sscanf(str,"%d %c %f",&j,&c,&f);
	printf("\n [ %d ] [ %c ] [ %f ] \n",j,c,f);
	return 0;
}