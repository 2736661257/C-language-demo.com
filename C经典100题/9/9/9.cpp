#include<stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)   
		{
			if ((i + j) % 2 == 0)  //�ص�
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


//\1 = Ц��ǳ��
//\2 = Ц�����
//\3 = ����
//\4 = ����
//\5 = ÷��
//\6 = ������
//\7 = �ڿ��