#include<stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)   
		{
			if ((i + j) % 2 == 0)  //重点
			{
				printf("\7");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


//\1 = 笑脸浅的
//\2 = 笑脸深的
//\3 = 心形
//\4 = 菱形
//\5 = 梅花
//\6 = 倒心形
//\7 = 黑快快