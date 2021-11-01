#define _CRT_SECURE_NO_WARNINGS 1

//ADT Circle{
//	数据对象：D = { r, x, y | r, x, y均为实数 }
//	数据关系：R = { <r, x, y> | r是半径, <x, y>是圆心坐标 }
//	基本操作：
//		Circle（&C，r, x, y）
//		操作结果：构造一个圆。
//		double Area(C)
//		初始条件：圆已存在。
//		操作结果：计算面积。
//		double Circumference(C)
//		初始条件：圆已存在。
//		操作结果：计算周长。
//		...
//}ADT Circle




//ADT Complex{
//	D = {r1,r2|r1,r2都是实数}
//	S = {<r1,r2>|r1是实部，r2是虚部}
//	assgin(&C,v1,v2)
//	初始条件:空的复数C已存在
//			 操作结果：构造复数C，r1,r2分别被赋以参数v1,v2的值。
//	destory(&C)
//			 初始条件：复数C已存在
//			 操作结果：复数C被销毁。
//	GetReal(Z, &realPart)
//			 初始条件 : 复数已存在。
//			 操作结果 : 用realPart返回复数Z的实部值。
//	Getlmag(z, &lmagPart)
//			 初始条件 : 复数已存在。
//			 操作结果 : 用lmagPart返回复数Z的虚部值。
//	Add(z1, z2, &sum)
//			 初始条件 : z1, z2是复数。
//			 操作结果 : sum返回两个复数z1, z2的和。
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





