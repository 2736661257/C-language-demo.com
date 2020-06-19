#include<stdio.h>
int main()
{
	int i, num = 2;
	for (i = 0; i < 3; i++)
	{
		printf("\40: the number equal%d\n", num);
		num++;
		{
			static int num = 1;
			printf("\40: the internal block number equal%d\n", num);
			num++;
		}
	}

}