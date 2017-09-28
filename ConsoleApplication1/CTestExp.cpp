/*
	���Z�q

*/

#include "stdafx.h"
#include "CTest.hpp"


void CTestExp::test1() {
	printf_s("CTestExp::test1\n");


	int a = 100;
	int b = 200;

	// �l�����Z�A��
	printf_s("a = %d, b = %d\n", a, b);
	printf_s("a + b = %d\n", a + b);
	printf_s("a - b = %d\n", a - b);
	printf_s("a x b = %d\n", a * b);
	printf_s("a / b = %d\n", a / b);
	printf_s("a %% b = %d\n", a % b);
	printf_s("a++\n", a++);
	printf_s("b++\n", b++);

}

// �r�b�g���Z�q
void CTestExp::test2() {
	printf_s("CTestExp::test2\n");

	// & �r�b�gAND
	// | �r�b�gOR
	printf_s("0xffff & 0xff = %x\n", 0xffff & 0xff);
	printf_s("0xff | 0x00ff = %x\n", 0xff | 0xff00);

	unsigned short a = 0xff00;

	// �r�b�g���]
	printf_s("reverse bit 0xff00 = %04x\n", ~a);

	// �r�b�g�V�t�g
	printf_s("0x1 << 8 = %x\n", 0x1 << 8);
	printf_s("0x100 >> 8 = %x\n", 0x100 >> 8);
}

void CTestExp::test3() {
	printf_s("CTestExp::test3\n");
}
