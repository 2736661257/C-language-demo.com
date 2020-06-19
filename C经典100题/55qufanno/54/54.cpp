#include<stdio.h>
void main()
{
	int a, b;
	a = 234;
	b = ~a;
	printf("\40: %d\n", b);
	a = ~a;
	printf("\40:%x\n", a);
}