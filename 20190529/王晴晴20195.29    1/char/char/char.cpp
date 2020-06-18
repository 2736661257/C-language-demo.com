/**********字符和字符串型的练习**************/
//char字符型的练习
//法1ok
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
//	a = getchar();   //这对只能对于字符型的，也可以getchar输入，printf()来搭配着输出
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
//	for (i = 0; i < 6; i++)     //这里的输入的字符可以和数组的长度个数相同，因为这里是以字符数组来进行的不是字符串。
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
//{                       //注意这里的gets和puts这对是只能对于字符串的输入和输出，并别，输入的字符个数要比长度少一个。
//	char s[6];    //1.2.比较得出的结果 注意输入的字符不能超过数组长度，要比定义的数组长度少一个单位，因为字符串（字符数组）在最后会有一个\0来结束
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
	while ((c = getchar()) != '\n')        //'\n'是从键盘中按下回车键，这里表示只要不从键盘中键入回车就一直执行for循环里的内容
	{
		a[i++] = c;
		//printf("%s", a[i - 1]);
	}
	a[i] = '\0';                    //\0是字符串的结束符号，如果想要输出字符串就必须要有这条语句
	printf("%s", a);          //如果是要输出字符串的话的，并且是数组，后面的变量名可以是数组名也可以是用指针，

}



