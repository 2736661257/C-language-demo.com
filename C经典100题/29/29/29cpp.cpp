#include<stdio.h>
int main()
{
	long x, a, b, c, d, e,f;
	printf("������5λ���֣�");
	scanf("%ld", &x);
	f = x % 1000000 / 100000;
	a = x %100000/ 10000;
	b = x % 10000/ 1000;
	c = x % 1000 / 100;
	d = x % 100 / 10;
	e = x % 10;
	if (f != 0)
	{
		printf("Ϊ6λ��������λ%ld %ld %ld %ld %ld %ld\n", e, d, c, b, a,f);
	}
	if (a != 0)
	{
		printf("Ϊ5λ��������λ%ld %ld %ld %ld %ld\n", e, d, c, b, a);
	}
	if (b != 0)
	{
		printf("Ϊ4λ��������λ%ld %ld %ld %ld\n", e, d, c, b);
	}
	if (c != 0)
	{
		printf("Ϊ3λ��������λ%ld %ld %ld\n", e, d, c);
	}
	if (d != 0)
	{
		printf("Ϊ2λ��������λ%ld %ld\n", e, d);
	}
	else if (e != 0)
	{
		printf("Ϊ1λ��������λ%ld\n", e);
	}
}