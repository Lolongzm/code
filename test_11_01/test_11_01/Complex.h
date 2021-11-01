#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

typedef struct{
	float realpart;
	float imagpart;
}Complex;


void assgin(Complex * A, float real, float imag);
void destory(Complex * A);
void add(Complex * C, Complex  A, Complex  B);
void minus(Complex * C, Complex  A, Complex  B);
void multiply(Complex * C, Complex  A, Complex  B);
void divide(Complex * C, Complex  A, Complex  B);
void Show(Complex * A);