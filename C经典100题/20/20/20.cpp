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
	printf("��10������ʱ������%f�ף���ʮ�η����ĸ߶�Ϊ%f��\n", s, h);
}