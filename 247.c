#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],result[80];
	int pos,num, len,beg,end,i;
	printf("\n Enter String : ");
	gets(str);
	printf("\n Enter Position : ");
	scanf("%d",&pos);
	printf("\n Enter Number of Character : ");
	scanf("%d",&num);
	len = strlen( str );
	if( pos >= 1 && pos <= len )
	{
		beg = pos - 1;
		end = beg + num;
		if( num == 0 || end > len )
		{
			end = len;
		}
		i = 0;
		while( beg < end )
		{
			result[i] = str[beg];
			beg++;
			i++;
		}
		result[i] = '\0';
		printf("\n Result : %s \n",result);
	}
	else
	{
		printf("\n Invalid Position Given \n");
	}
	return 0;
}