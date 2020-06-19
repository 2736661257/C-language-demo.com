//
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	float a[3][3], sum = 0;
//	printf("please input juzhen!\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%f", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		sum += a[i][i];
//	}
//	printf("duijiaoxian he shi:%6.2f\n", sum);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int i, j;
	float a[3][3], sum = 0;
	printf("please input juzhen!\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				sum += a[i][j];
			}
		}
	}
	printf("duijiaoxian he shi:%6.2f\n", sum);
	return 0;
}