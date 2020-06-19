#include<stdio.h>
void main()
{
	int a, b, c, t;
	printf("please input three digital:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%4d%4d%4d", a, b, c);
}