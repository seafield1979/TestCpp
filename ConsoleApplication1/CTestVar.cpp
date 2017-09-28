/*
	変数の宣言
	変数の型
*/

#include "stdafx.h"
#include "CTest.hpp"


// 変数の宣言、参照
void CTestVar::test1() {
	printf_s("CTestVar::test1\n");

	int a;					// 宣言
	int a2 = 100;			// 初期値つき
	int b = 1, b2 = 2;		// 一行に複数の変数を定義
	a = 50;

	printf_s("%d %d %d %d\n", a, a2, b, b2);
}


// いろいろな変数の型
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

// 型キャスト
// 型の異なる変数を代入する場合や、演算結果を強制的に指定の型に変換したい場合は型キャストを行う。
void CTestVar::test3() {
	printf_s("CTestVar::test3\n");

	int a = 100000;
	char c = (char)a;
	short s = (short)a;

	printf_s("%d %d %d\n", a, c, s);
}
