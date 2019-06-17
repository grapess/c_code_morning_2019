#include<stdio.h>
union Info
{
	int rollno;
	char name[2];
};
int main()
{
	union Info u;
	u.rollno = 39432;
	printf("\n The Roll No : %d \n",u.rollno);
	u.name[1] = 'A';
	printf("\n Character : %c \n",u.name[1]);
	printf("\n The Roll No : %d \n",u.rollno);
	return 0;
}
// There 4 bytes
// 00000000 00000000 10011010 00001000
// CPU follow Little Endian Architecture which means lower byte save first
// 00001000 10011010 00000000 00000000  
//  name[0]  name[1]
// name[1] = 'A' = 65 = 01000001
// 00001000 01000001 00000000 00000000 
// 0100000100001000