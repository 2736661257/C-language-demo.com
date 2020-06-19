//#include<stdio.h>
//void main()
//{
//	int i, j, a[10][10];
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (i == j || j == 0)
//			{
//				a[i][j] = 1;
//			}
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%5d", a[i][j]);
//			printf("\n");
//		}
//	}
//}



#include<stdio.h>
void main()
{
	int i, j, k, a[10][10];
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 9 - i;k++)
		{ 
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}