//#include<stdio.h>
//int main()
//{
//	int  i, c;
//	float a = 2, b = 1, sum = 0;
//	for (i = 0; i < 20; i++)
//	{
//		sum += a / b;
//		c = a;
//		a = a + b;
//		b = c;
//	}
//	printf("%9.6f\n", sum);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a = 2, b = 1, c, i;   //为什么将ab定义成浮点数和整形的结果会不一样？
	float sum = 0;
	for (i = 0; i < 20; i++)
	{
		sum += a / b;
		c = a;
		a = a + b;
		b = c;
	}
	printf("%f\n", sum);
}