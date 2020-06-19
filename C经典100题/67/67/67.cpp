//#include<stdio.h>
//void main()
//{
//	int i, j, k;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - i; j++)
//		{
//			printf("*");
//		}
//		for (k = 0; k <= i; k++)
//		{
//			printf("/");
//		}
//		printf("\n");
//	}
//}

#include<stdio.h>
#include<stdlib.h>
void fun(int *s, int n)
{
	int i;
	int max = s[0];
	int a = 0;
	for (i = 0; i < n; i++)
	{
		if (s[i] > max)
		{
			max = s[i];
			a = i;
		}
	}
	s[a] = s[0];
	s[0] = max;
	int j;
	int min = s[n - 1];
	int b = n - 1;
	for (j = 0; j < n; j++)
	{
		if (s[j] < min)
		{
			min = s[j];
			b = j;
		}
	}
	s[b] = s[n - 1];
	s[n - 1] = min;
}

void printf_s(int *s, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%5d", s[i]);
	}
	printf("\n");
}

int main()
{
	int s[20], i, n;
	printf("请设置数组的长度<20:");
	scanf("%d", &n);
	printf("输入%d个元素：\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	fun(s, n);
	printf_s(s, n);
	return 0;
}