/**********�ַ����ַ����͵���ϰ**************/
//char�ַ��͵���ϰ
//��1ok
//#include<stdio.h>
//void main()
//{
//	char a, b;
//	printf("input two char:\n");
//	scanf("%c%c", &a, &b);
//	printf("%c%c", a, b);
//
//}

//#include<stdio.h>
//void main()
//{
//	char a, b;
//	printf("input two char:\n");
//	/*scanf("%c%c", &a, &b);*/
//	a = getchar();   //���ֻ�ܶ����ַ��͵ģ�Ҳ����getchar���룬printf()�����������
//	b = getchar();
//	putchar(a);
//	putchar(b);
//	/*printf("%c%c", a, b);*/
//
//}

//
//#include<stdio.h>
//void main()
//{
//	char str[6], i;
//	printf("input a[i]:\n");
//	for (i = 0; i < 6; i++)     //�����������ַ����Ժ�����ĳ��ȸ�����ͬ����Ϊ���������ַ����������еĲ����ַ�����
//	{
//		scanf("%c", &str[i]);
//		printf("%c", str[i]);
//	}
//
//}

//#include<stdio.h>
//void main()
//{
//	char str[6], i;
//	printf("input a[i]:\n");
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%c", &str[i]);
//		printf("%c", str[i]);
//	}
//
//}

//#include<stdio.h>
//int main()
//{
//	char a[5], b[5];
//	int i;
//	printf("Input the value of a and b:");
//	while (scanf("%s%s", a, b) != EOF)
//	{
//		printf("a=%s,b=%s\n", a, b);
//		for (i = 0; i<5; i++)
//			printf("%d:(%c) ", a[i], a[i]);
//		printf("\n");
//		for (i = 0; i<5; i++)
//			printf("%d:(%c) ", b[i], b[i]);
//		printf("\n");
//		printf("Input the value of a and b:");
//	}
//	return 0;
//}


////1.                               
//#include<stdio.h>
//void main()
//{                       //ע�������gets��puts�����ֻ�ܶ����ַ�������������������������ַ�����Ҫ�ȳ�����һ����
//	char s[6];    //1.2.�Ƚϵó��Ľ�� ע��������ַ����ܳ������鳤�ȣ�Ҫ�ȶ�������鳤����һ����λ����Ϊ�ַ������ַ����飩��������һ��\0������
//	gets_s(s);
//	puts(s);
//}
//2.
//#include<stdio.h>
//void main()
//{
//	char s[20];
//	gets_s(s);
//	puts(s);
//}



//
#include<stdio.h>
void main()
{
	char a[10], c;
	int i = 0;
	while ((c = getchar()) != '\n')        //'\n'�ǴӼ����а��»س����������ʾֻҪ���Ӽ����м���س���һֱִ��forѭ���������
	{
		a[i++] = c;
		//printf("%s", a[i - 1]);
	}
	a[i] = '\0';                    //\0���ַ����Ľ������ţ������Ҫ����ַ����ͱ���Ҫ���������
	printf("%s", a);          //�����Ҫ����ַ����Ļ��ģ����������飬����ı�����������������Ҳ��������ָ�룬

}



