#include<stdio.h>
int age(int n);
int main()
{
	int r=0,a=5;
	r = age(a);
	printf("%d\n", r);
}
int age(int n)
{
	int c;
	if (n == 1)
	{
		c = 10;
	}
	else
	{
		c = age(n - 1) + 2;
	}
	return c;
}


//#include<stdio.h>
//int main()
//{
//	int a = 10, b=1, t, i;
//	for (i = 1; i < 5; i++)
//	{
//		a = a + 2;
//		b = a + 2;
//		t = b;
//		b = a;
//	}
//	printf("%d\n", b);
//}