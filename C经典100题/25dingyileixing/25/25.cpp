#include<stdio.h>
int main()
{
	int i;
	long double mix=1, sum=0;
	for (i = 1; i <= 20; i++)
	{
		mix *= i;   //���ÿһ��Ľ׳�
		sum += mix;
	}
	printf("%lf\n", sum);
	return 0;
}