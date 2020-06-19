#include<stdio.h>
#define true 1
#define false 0
#define sq(x) (x)*(x)
int main()
{
	int num;
	int again = 1;
	printf("\40: program will stop if input value less that 50.\n");
	while (again)
	{
		printf("\40:please input number==>");
		scanf("%d", &num);
		printf("\40:the square for this number is %d \n", sq(num));
		if (num >= 50)
		{
			again = true;
		}
		else
		{
			again = false;
		}
	}
}