#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char st1[80],st2[80];
	int count1[26] = {};
	int count2[26] = {};
	int anagram,i;
	printf("\n Enter Any String : ");
	gets(st1); // LISTEN
	printf("\n Enter Any String : ");
	gets(st2); // SILENT
	i = 0;
	while( st1[i] != '\0' )
	{
		if(st1[i] >= 65 && st1[i] <= 90 )
		{
			count1[st1[i] - 65]++;
		}
		else if(st1[i] >= 97 && st1[i] <= 122 )
		{
			count1[st1[i] - 97]++;
		}
		i++;
	}
	i = 0;
	while( st2[i] != '\0' )
	{
		if(st2[i] >= 65 && st2[i] <= 90 )
		{
			count2[st2[i] - 65]++;
		}
		else if(st2[i] >= 97 && st2[i] <= 122 )
		{
			count2[st2[i] - 97]++;
		}
		i++;
	}
	anagram = 1;
	
	for( i = 0; i < 26; i++ )
	{
		if( count1[i] != count2[i] )
		{
			anagram = 0;
			break;
		}
	}
	
	if( anagram == 1 )
	{
		printf("\n Given String are Anagram \n");
	}
	else
	{
		printf("\n Given String are not Anagram \n");
	}
	return 0;
}