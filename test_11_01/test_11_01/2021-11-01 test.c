#define _CRT_SECURE_NO_WARNINGS 1

//ADT Circle{
//	���ݶ���D = { r, x, y | r, x, y��Ϊʵ�� }
//	���ݹ�ϵ��R = { <r, x, y> | r�ǰ뾶, <x, y>��Բ������ }
//	����������
//		Circle��&C��r, x, y��
//		�������������һ��Բ��
//		double Area(C)
//		��ʼ������Բ�Ѵ��ڡ�
//		������������������
//		double Circumference(C)
//		��ʼ������Բ�Ѵ��ڡ�
//		��������������ܳ���
//		...
//}ADT Circle




//ADT Complex{
//	D = {r1,r2|r1,r2����ʵ��}
//	S = {<r1,r2>|r1��ʵ����r2���鲿}
//	assgin(&C,v1,v2)
//	��ʼ����:�յĸ���C�Ѵ���
//			 ������������츴��C��r1,r2�ֱ𱻸��Բ���v1,v2��ֵ��
//	destory(&C)
//			 ��ʼ����������C�Ѵ���
//			 �������������C�����١�
//	GetReal(Z, &realPart)
//			 ��ʼ���� : �����Ѵ��ڡ�
//			 ������� : ��realPart���ظ���Z��ʵ��ֵ��
//	Getlmag(z, &lmagPart)
//			 ��ʼ���� : �����Ѵ��ڡ�
//			 ������� : ��lmagPart���ظ���Z���鲿ֵ��
//	Add(z1, z2, &sum)
//			 ��ʼ���� : z1, z2�Ǹ�����
//			 ������� : sum������������z1, z2�ĺ͡�
//
//}ADT Complex

#include"Complex.h"

int main()
{
	Complex* c = (Complex*)malloc(sizeof(Complex));

	Complex a = {0,0};
	Complex b = { 0, 0 };
	
	assgin(&a, 8.0, 2.0);
	assgin(&b, 2.0, 1.0);

	divide(c, a, b);
	Show(c);
	return 0;
}





