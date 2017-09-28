/*
	演算子

*/

#include "stdafx.h"
#include "CTest.hpp"


void CTestExp::test1() {
	printf_s("CTestExp::test1\n");


	int a = 100;
	int b = 200;

	// 四則演算、他
	printf_s("a = %d, b = %d\n", a, b);
	printf_s("a + b = %d\n", a + b);
	printf_s("a - b = %d\n", a - b);
	printf_s("a x b = %d\n", a * b);
	printf_s("a / b = %d\n", a / b);
	printf_s("a %% b = %d\n", a % b);
	printf_s("a++\n", a++);
	printf_s("b++\n", b++);

}

// ビット演算子
void CTestExp::test2() {
	printf_s("CTestExp::test2\n");

	// & ビットAND
	// | ビットOR
	printf_s("0xffff & 0xff = %x\n", 0xffff & 0xff);
	printf_s("0xff | 0x00ff = %x\n", 0xff | 0xff00);

	unsigned short a = 0xff00;

	// ビット反転
	printf_s("reverse bit 0xff00 = %04x\n", ~a);

	// ビットシフト
	printf_s("0x1 << 8 = %x\n", 0x1 << 8);
	printf_s("0x100 >> 8 = %x\n", 0x100 >> 8);
}

void CTestExp::test3() {
	printf_s("CTestExp::test3\n");
}
