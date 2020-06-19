#include<stdio.h>
void main()
{
	int i, j, k,n=0;
	for (i = 1; i <=4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			for (k = 1; k <= 4; k++)
			{
				if (i != j&&i != k&&j != k)
				{
					printf("%d%d%d\n", i, j, k);
					n++;
				}
			}
		}
	}
	printf("满足条件的个数是：%d\n", n);
}