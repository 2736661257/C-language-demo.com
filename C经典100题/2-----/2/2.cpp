//#include<stdio.h>
//void main()
//{
//	double i, bonus;
//	printf("please profit i\n ");
//	scanf("%lf", &i);
//	if (i <= 100000)
//		bonus = i * 0.1;
//	if (i > 100000 && i < 200000)
//		bonus += (i - 100000)*0.075;
//	if (i >= 200000 && i < 400000)
//		bonus += (i - 200000)*0.05;
//	if (i >= 400000 && i < 600000)
//		bonus += (i - 400000)*0.03;
//	if (i >= 600000 && i < 1000000)
//		bonus += (i - 600000)*0.015;
//	if (i >= 1000000)
//		bonus += (i - 100000)*0.01;
//	printf("profit is %lf,bonus is %lf", i, bonus);
//}


//#include<stdio.h>
//void main()
//{
//	double i, bonus;
//
//	printf("please profit i\n ");
//	scanf("%lf", &i);
//	if (i <= 100000)
//		bonus = i * 0.1;
//	if (i > 100000 && i <= 200000)
//		bonus = 100000 * 0.1 + (i - 100000)*0.075;
//	if (i > 200000 && i <= 400000)
//		bonus =(i - 200000)*0.05;
//	if (i > 400000 && i <= 600000)
//		bonus = (i - 400000)*0.03;
//	if (i > 600000 && i <= 1000000)
//		bonus = (i - 600000)*0.015;
//	if (i > 1000000)
//		bonus = (i - 100000)*0.01;
//	printf("profit is %lf,bonus is %lf", i, bonus);
//}

#include<stdio.h>
void main()
{
	double i, bonus,bonus1,bonus2,bonus4,bonus6,bonus10;
	printf("please profit i\n ");
	scanf("%lf", &i);
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 + 200000 * 0.05;
	bonus6 = bonus4 + 200000 * 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	if (i <= 100000)
		bonus = i * 0.1;
	if (i > 100000 && i <= 200000)
		bonus = bonus1 + (i - 100000)*0.075;
	if (i > 200000 && i <= 400000)
		bonus = bonus2 + (i - 200000)*0.05;
	if (i > 400000 && i <= 600000)
		bonus = bonus4 + (i - 400000)*0.03;
	if (i > 600000 && i <= 1000000)
		bonus = bonus6 + (i - 600000)*0.015;
	if (i > 1000000)
		bonus = bonus10 + (i - 100000)*0.01;
	printf("profit is %lf,bonus is %lf", i, bonus);
}