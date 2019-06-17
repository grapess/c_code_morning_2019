#include<stdio.h>
int length(char st[])
{
	int len = 0;
	while( st[len] != '\0' )
	{
		len++;
	}
	return len;
}
void reverse( char str[] , int beg , int end )
{
	int mid;
	char temp;
	mid = ( beg + end ) / 2;	
	while( beg <= mid )
	{
		temp = str[beg];
		str[beg] = str[end];
		str[end] = temp;
		beg++;
		end--;
	}
}
int main()
{
	char str[80];
	int len, i , beg , end;
	printf("\n Enter Any String : ");
	gets(str);
	len = length( str );
	reverse( str , 0 , len - 1 );
	printf("\n String : %s \n",str);
	i = beg = 0;
	while( str[i] != '\0' )
	{
		if( str[i] == ' ' || str[i+1] == '\0' )
		{
			end = i - 1;
			if( str[i+1] == '\0' )
			{
				end = i;
			}
			reverse( str , beg , end );
			beg = i + 1;
		}
		i++;
	}
	printf("\n String : %s \n",str);
	return 0;
}