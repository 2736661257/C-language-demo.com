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
	p = 123456.789e5;//flote��һ��ȡС����֮��6λ��double ��һ��ȡС����֮��15λ��e����10�ļ��η�
	q = a + 20;
	printf("%f\n%f\n", p,q);

}





