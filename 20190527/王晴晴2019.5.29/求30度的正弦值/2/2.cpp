//��30�Ƚǵ�����ֵ
#include<stdio.h>
#include<math.h>
#define PI 3.1415926   //���������������治�üӷֺ�
void main()
{
	double x, r;         //��������
	printf("input sin nnumber:\n");
	scanf_s("%lf", &x);         //����������ֵ
	/*r = sin(x*3.1415926 / 180);*/ //���ú�����ֻ�ñ����������������,,,���ȵĻ���Ϊ  �Ƕ�/��360/2pai)�� �Ƕ�*pai/180
	r = sin(x*PI / 180);
	printf("sin %lf ��ֵ�� %lf", x, r);  //�������Ľ��
}


























//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926
//void main()
//{
//	double x = 30.0,s;
//	printf("input number:\n");
//	//scanf_s("%lf", &x);
//	s = sin(x *PI/180);          //�����*������ı��ʽ�����ŵĴ��󣿣���
//	printf("sin of %lf is %lf", x, s);
//
//}
