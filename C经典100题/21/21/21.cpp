#include<stdio.h>
int main()
{
	int day, x1=0, x2 = 1;
	for (day = 9; day > 0; day--)
	{
		x1 = 2*(x2 + 1);
		x2 = x1;
	}
	printf("第一天摘到的桃子的数目是%d", x1);
	return 0;
}