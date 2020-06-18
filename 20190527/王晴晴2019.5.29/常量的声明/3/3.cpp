//常量的声明
#include<stdio.h>
#define PI 40
int main()
{
	int a, r;
	printf("input a number:\n");
	scanf_s("%d", &a);
	r = PI*a;
	printf("\n%d 的运算结果为%d.\n", a, r);
	return 0;
}



















//#include<stdio.h>
//#define PRICE 30;
//void main()
//{
//	int num, total;
//	num = 10;
//	total = num*PRICE;
//	printf("total=%d\n", total);
//
//}