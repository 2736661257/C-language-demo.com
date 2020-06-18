//求一种类型的字节长度
#include<stdio.h>
void main()
{
	int a=8,r1,r2;
	double b;
    r1=sizeof(a);
	a = sizeof(a);
	r2 = sizeof(b);
	printf("%d%d%d", r1,r2,a);
}





















//#include<stdio.h>
//void main()
//{
//	printf("%d", sizeof(int));   //求一种类型的字节长度函数
//}