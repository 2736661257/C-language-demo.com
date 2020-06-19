#include<stdio.h>
void main()
{
	int i;
	for (i = 0; i < 7; i++)
	{
		if (i == 0 || i == 6)
		{
			printf("*******\n");
		}
		else
		{
			printf("*\n");
		}
	}
}