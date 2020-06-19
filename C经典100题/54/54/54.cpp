#include<stdio.h>
void main()
{
	unsigned a, b, c, d;
	printf("please input :a\n");
	scanf("%0", &a);
	b = a >> 4;
	c = ~(~0 << 4);
	d = b&c;
	printf("%0\n%0\n", a, d);
}