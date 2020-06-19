//#include<stdio.h>
//int main()
//{
//	int i;
//	float j=1;
//	for (i = 1; i <= 5; i++)
//	{
//		j *= i;   //利用for循环来完成5！
//	}
//	printf("%f", j);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i=5,r;
	int fact(int j);
	/*for (i = 0; i < 6; i++)
	{*/
	r = fact(i);
		printf("%d!=%d\n", i, r);
	/*}*/
	return 0;
}
int fact(int j)
{
	int r=0;
	if (j = 0)
	{
		r = 1;
	}
	else
	{
		r = fact(j - 1)*j;
	}
	return r;
}