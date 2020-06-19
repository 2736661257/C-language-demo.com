#include<stdio.h>
void main()
{
	int i, j, k, a, m = 0;
	for (a = 100; a < 1000; a++)
	{
		i = a % 10;
		j = a / 10 % 10;
		k = a / 100 % 10;
		if (a == (i*i*i+j*j*j+k*k*k))
		{
			m++;
			printf("%4d", a);
			if (m % 2 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n%d", m);
}