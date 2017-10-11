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

	// ビットXOR
	//ビットXORは演算子の左辺と右辺の同じ位置にあるビットを比較して、ビットの値が異なる場合にだけ「1」にします。

	// 0000000000001011 = 11
	// 0000000000001110 = 14
	// ----------------
	// 0000000000000101 = 5
	printf_s("XOR %x\n", 0xB ^ 0xE);

	// ビットNOT
	// ビットNOTは演算子の右辺の値の各ビットに対して「1」の場合は「0」に、「0」の場合は「1」にします。
	//0000000000001011 = 11
	//----------------
	//1111111111110100 = -12
	printf_s("NOT %x\n", ~0x1234);
}

void CTestExp::test3() {
	printf_s("CTestExp::test3\n");
}
