#include<stdio.h>
int main()
{
	long x, a, b, c, d, e,f;
	printf("请输入5位数字：");
	scanf("%ld", &x);
	f = x % 1000000 / 100000;
	a = x %100000/ 10000;
	b = x % 10000/ 1000;
	c = x % 1000 / 100;
	d = x % 100 / 10;
	e = x % 10;
	if (f != 0)
	{
		printf("为6位数，逆序位%ld %ld %ld %ld %ld %ld\n", e, d, c, b, a,f);
	}
	if (a != 0)
	{
		printf("为5位数，逆序位%ld %ld %ld %ld %ld\n", e, d, c, b, a);
	}
	if (b != 0)
	{
		printf("为4位数，逆序位%ld %ld %ld %ld\n", e, d, c, b);
	}
	if (c != 0)
	{
		printf("为3位数，逆序位%ld %ld %ld\n", e, d, c);
	}
	if (d != 0)
	{
		printf("为2位数，逆序位%ld %ld\n", e, d);
	}
	else if (e != 0)
	{
		printf("为1位数，逆序位%ld\n", e);
	}
}