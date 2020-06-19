#include<stdio.h>
int main()
{
	int i;
	long double mix=1, sum=0;
	for (i = 1; i <= 20; i++)
	{
		mix *= i;   //完成每一项的阶乘
		sum += mix;
	}
	printf("%lf\n", sum);
	return 0;
}