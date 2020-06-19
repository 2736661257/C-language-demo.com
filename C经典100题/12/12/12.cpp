//cuo
//#include<stdio.h>
//void main()
//{
//	int i, j, m = 0, leap;
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				leap = 0;
//				break;
//			}
//		}
//		if (leap == 1)
//		{
//			m++;
//			printf("%d", i);
//			if (m % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("\n%4d", m);
//}

//
//#include<stdio.h>
//void main()
//{
//	int i, j, k = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//		{
//			k++;
//			printf("%4d", i);
//			if (k % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("\n%4d", k);
//}

#include "math.h"
#include<stdio.h>
void main()
{
	int m, i, k, h = 0, leap = 1;
	printf("\n");
	for (m = 101; m <= 200; m++)
	{
		k = sqrt(m + 1);
		for (i = 2; i <= k; i++)
			if (m%i == 0)
			{
				leap = 0;
				break;
			}
		if (leap) 
		{
			printf("%-4d", m); 
			h++;
			if (h % 10 == 0)
				printf("\n");
		}
		leap = 1;
	}
	printf("\nthe total is %d", h);
}
