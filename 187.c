#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],temp;
	int i,beg,end,mid,j;
	printf("\n Enter Any String : ");
	gets(str);	
	strrev( str );	
	printf("\n Result : %s \n",str);
	beg = i = 0;
	while( str[i] != '\0' )
	{
		if( str[i] == ' ' || str[i+1] == '\0' )
		{
			if( i != beg )
			{
				end = i - 1;
				if( str[i+1] == '\0' )
				{
					end = i;
				}
				mid = ( end + beg ) / 2;
				printf("\n beg = %d end = %d mid = %d ",beg,end,mid);
				for( j = beg; j <= mid; j++ )
				{
					temp = str[j];
					str[j] = str[end];
					str[end] = temp;
					end--;
				}
				beg = i + 1;
			}
		}
		i++;
	}
	printf("\n Result : %s \n",str);
	return 0;
}