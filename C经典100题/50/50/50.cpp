#include<stdio.h>
#define lag >
#define sma <
#define eq ==
#include "test.h"
void main()
{
	int i = 10;
	int j = 20;
	if (i lag j)
	{
		printf("\40: %d larger than %d \n", i, j);
	}
	else if (i eq j)
	{
		printf("\40: %d equal to %d \n", i, j);
	}
	else if (i sma j)
	{
		printf("\40: %d smaller than %d \n", i, j);
	}
	else
		printf("\40: no such value.\n");
}