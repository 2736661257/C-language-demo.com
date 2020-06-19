#include<stdio.h>
void main()
{
	int m, n, i, j, x;
	for (i = 1; i < 168 / 2 + 1; i++)
	{
		if (168 % i == 0)
		{
			j = 168 / i;
			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
			{
				m = (i + j) / 2;
				n = (i - j) / 2;
				x = n*n - 100;
				printf("Î´ÖªÊýXÊÇ£º%d\n", x);
				printf("%d+100=%d%d\n", x, n, n);
				printf("%d+268=%d%d\n\n", x, m, m);
			}

		}
	}
}