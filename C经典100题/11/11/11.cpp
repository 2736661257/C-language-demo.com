//#include<stdio.h>
//void main()
//{
//	int f1 = 1, f2 = 1, i;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%12d%12d", f1);
//		if (i % 2 == 0)
//		{
//			printf("\n");
//		}
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}
//}



#include<stdio.h>
void main()
{
	int i, a[40] = { 1,1 };
	for (i =2 ; i < 40; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (i = 0; i < 40; i++)
	{
		if (i % 4 == 0)
		{
			printf("\n");
		}
	}
	printf("第%d月的是%d\n", i, a[i]);
}