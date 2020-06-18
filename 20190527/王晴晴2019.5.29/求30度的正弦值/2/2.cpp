//求30度角的正弦值
#include<stdio.h>
#include<math.h>
#define PI 3.1415926   //常量的声明，后面不用加分号
void main()
{
	double x, r;         //声明变量
	printf("input sin nnumber:\n");
	scanf_s("%lf", &x);         //给变量赋初值
	/*r = sin(x*3.1415926 / 180);*/ //调用函数来只用变量，将其参与运算,,,弧度的换算为  角度/（360/2pai)即 角度*pai/180
	r = sin(x*PI / 180);
	printf("sin %lf 的值是 %lf", x, r);  //输出运算的结果
}


























//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926
//void main()
//{
//	double x = 30.0,s;
//	printf("input number:\n");
//	//scanf_s("%lf", &x);
//	s = sin(x *PI/180);          //这个加*和里面的表达式加括号的错误？？？
//	printf("sin of %lf is %lf", x, s);
//
//}
