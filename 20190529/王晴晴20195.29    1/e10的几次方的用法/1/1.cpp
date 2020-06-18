#include<stdio.h>
void main()
{
	int a, b, c, d;
	unsigned u;
	a = 12;
	b = -24;
	u = 10;
	c = a + u;
	d = b + u;
	printf("a+u=%d\n",c);
	double p, q;
	p = 123456.789e5;//flote型一般取小数点之后6位，double 型一般取小数点之后15位，e代表10的几次方
	q = a + 20;
	printf("%f\n%f\n", p,q);

}





