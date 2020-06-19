
#include<stdio.h>
//#define N 1000
int main()
{
	int i, j, k, n, sum;
	int a[256];  ////数组的长度？
	for (i = 2; i <= 1000; i++)
	{
		sum = a[0] = 1;
		k = 0;
		for (j = 2; j <= (i/2); j++)////范围的理解
		{
			if (i%j==0)
			{
				a[++k] = j;
				sum += j;
				
			}
		}
		if (i == sum)
		{
			printf("%d=%d", i, a[0]);
			for (n = 1; n <= k; n++)
			{
				printf("+%d", a[n]);
			}
			printf("\n");
		}
	}
	return 0;
}




