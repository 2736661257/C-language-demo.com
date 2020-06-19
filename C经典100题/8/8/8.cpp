#include<stdio.h>
void main()
{
	int i, j, r;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			r = j*i;
			printf("%d*%d=%2d  ", j, i, r);
		}
		printf("\n");
	}
}