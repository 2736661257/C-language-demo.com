#include<stdio.h>
void main()
{
	int a, b;
	a = 077;
	b = a & 3;
	printf("\40: the a &b(decimal) is %d \n", b);
	b &= 7;
	printf("\40: the a &b(decimal) is %d \n", b);
}