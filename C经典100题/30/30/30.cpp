#include<stdio.h>
int main()
{
	int ge, shi, bai, qian, wan, x = 12321;
	wan = x % 100000 / 10000;
	qian = x % 10000 / 1000;
	shi = x % 100 / 10;
	ge = x % 10;
	if (wan == ge&&qian == shi)
	{
		printf("the number is huiwenshu.\n");
	}
	else
	{
		printf("the number is't huiwenshu.");
	}
}