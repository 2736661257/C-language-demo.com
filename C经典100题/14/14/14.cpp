//#include<stdio.h>
//void main()
//{
//	int i, n;
//	printf("please input digital.\n");
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++)
//	{
//		while (n%i==0)
//		{
//			printf("%d", i);
//			n /= i;
//			if (n != 1)
//			{
//				printf("*");
//			}
//		}
//	}
//	printf("\n");
//}

#include<stdio.h>
void main()
{
	int n, i;
	printf("please input a digital.\n");
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1)
			{
				printf("*");
			}
		}
	}
}

