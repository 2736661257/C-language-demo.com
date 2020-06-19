#include<stdio.h>
int main()
{
	float h, s;
	int i;
	h = s = 100;
	h /= 2;
	for (i = 2; i < 11; i++)
	{
		s += 2*h;
		h /= 2;
	}
	printf("第10此落下时共经过%f米，第十次反弹的高度为%f米\n", s, h);
}