#include<stdio.h>
void main()
{
	int i, j;
	printf("\1\1\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("\3");
		}
		printf("\n");
	}
}