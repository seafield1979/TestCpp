/*
	関数のポインタ
	関数のポインタを変数に代入して、変数を使って関数を呼び出す
*/
#include "stdafx.h"

#include "CTest.hpp"

// 関数のポインタの型を定義する
typedef int (*FuncP)(int, int);

int myFunc(int a, int b) {
	return a + b;
}

int myFunc2(int a, int b) {
	return a - b;
}


// 関数のポインタを代入、使用
void CTestFuncP::test1() {
	int (*pfn)(int, int) = myFunc;
	int (*pfn2)(int, int) = myFunc2;

	printf_s("%d %d\n", pfn(10, 20), pfn2(10, 20));
}

// 定義した型名を使用する
void CTestFuncP::test2() {
	FuncP pfn = myFunc;
	FuncP pfn2 = myFunc2;

	printf_s("%d %d\n", pfn(10, 20), pfn2(10, 20));
}

void CTestFuncP::test3() {

}
