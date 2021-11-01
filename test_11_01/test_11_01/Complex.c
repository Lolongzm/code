#define _CRT_SECURE_NO_WARNINGS 1
#include"Complex.h"

void assgin(Complex * A, float real, float imag)
{
	A->realpart = real;//ʵ����ֵ
	A->imagpart = imag;//�鲿��ֵ
}						//End of assgin����

void add(Complex * C, Complex  A, Complex  B)
{
	C->realpart = A.realpart + B.realpart;//ʵ�����
	C->imagpart = A.imagpart + B.imagpart;//�鲿���
}						//End of add����

void minus(Complex * C, Complex  A, Complex  B)
{
	C->realpart = A.realpart - B.realpart;//ʵ�����
	C->imagpart = A.imagpart - B.imagpart;//�鲿���
}

void divide(Complex * C, Complex  A, Complex  B)
{
	if (B.realpart != 0 && B.imagpart != 0)
	{
		C->realpart = (A.realpart*B.realpart + A.imagpart*B.imagpart) / (B.realpart*B.realpart + B.imagpart*B.imagpart);
		C->imagpart = (A.imagpart*B.realpart - A.realpart*B.imagpart) / (B.realpart*B.realpart + B.imagpart*B.imagpart);
	}
	else
	{
		
		printf("%s\n", strerror(errno));
	}
}

void Show(Complex * A)
{
	if (A->realpart != 0&&A->imagpart == 0)
		printf("%.0f\n", A->realpart);
	if (A->realpart == 0&&A->imagpart != 0)
		printf("%.0f\n", A->imagpart);
	else if (A->imagpart < 0)
		printf("%.0f%.0fi\n", A->realpart, A->imagpart);
	else
		printf("%.0f+%.0fi\n", A->realpart, A->imagpart);

}