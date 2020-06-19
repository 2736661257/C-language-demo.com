

//#include<stdio.h>
//void main()
//{
//	int i, j, k, sum = 0;
//	printf("please input k\n");
//	scanf("%d", &k);
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//
//			printf("%d", k);
//			sum += k;
//		}
//		printf("+");
//		
//	}
//	printf("\nsum=%d", sum);
//
//}

#include<stdio.h>
void main()
{
	int a, n, s = 0, t;
	printf("please input a,n\n");
	scanf("%d%d", &a, &n);
	t = a;
	while (n > 0)
	{
		s += t;
		a *= 10;
		t += a;
		n--;
	}
	printf("a+aa+...=%d\n", s);
}





//#include<stdio.h>
//void main()
//{
//	int i, j, k, s = 0;
//	printf("please input j\n");
//	scanf("%d", &j);
//	k = j;
//	for (i = 0; i < 5; i++)
//	{
//		s += k;
//		j *= 10;
//		k += j;
//
//	}
//	printf("%d", s);
//}