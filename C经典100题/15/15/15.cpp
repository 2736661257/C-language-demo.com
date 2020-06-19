//#include<stdio.h>
//void main()
//{
//	int score;
//	char grade;
//	printf("please input score:\n");
//	scanf("%d", &score);
//	if (score >= 90)
//	{
//		printf("grade is 'A'\n");
//	}
//	if (score >= 60&&score<90)
//	{
//		printf("grade is 'B'\n");
//	}
//	if (score <60)
//	{
//		printf("grade is 'C'\n");
//	}
//
//}


//cuo
//#include<stdio.h>
//void main()
//{
//	int score;
//	char grade;
//	printf("please input score:\n");
//	scanf("%d", &score);
//	(score >= 90) ? ('A':(score >= 60 && score < 90) ? 'B' : 'C');
//	printf("%d", score);
//}


#include<stdio.h>
void main()
{
	int score;
	char grade;
	printf("please input score:\n");
	scanf("%d", &score);
	grade=(score >= 90) ? 'A':((score >= 60 ) ? 'B' : 'C');
	printf("%d grade is %c", score,grade);
}