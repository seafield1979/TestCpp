/*
	�ϐ��̐錾
	�ϐ��̌^
*/

#include "stdafx.h"
#include "CTest.hpp"


// �ϐ��̐錾�A�Q��
void CTestVar::test1() {
	printf_s("CTestVar::test1\n");

	int a;					// �錾
	int a2 = 100;			// �����l��
	int b = 1, b2 = 2;		// ��s�ɕ����̕ϐ����`
	a = 50;

	printf_s("%d %d %d %d\n", a, a2, b, b2);
}


// ���낢��ȕϐ��̌^
void CTestVar::test2() {
	printf_s("CTestVar::test2\n");

	char c = 'a';
	unsigned char uc = 200;
	short s = 10000;
	unsigned short us = 40000;
	int i = 1000000;
	unsigned int ui = 3500000000;
	long l = 1000000000;
	unsigned long ul = 200000000000;
	float f = 1.2345f;
	double d = 0.000000000000001234;

	printf_s("%d %d %d %d %d %d\n", c, uc, s, us, i, ui);
	printf_s("%f %f\n", f, d);
}

// �^�L���X�g
// �^�̈قȂ�ϐ���������ꍇ��A���Z���ʂ������I�Ɏw��̌^�ɕϊ��������ꍇ�͌^�L���X�g���s���B
void CTestVar::test3() {
	printf_s("CTestVar::test3\n");

	int a = 100000;
	char c = (char)a;
	short s = (short)a;

	printf_s("%d %d %d\n", a, c, s);
}
