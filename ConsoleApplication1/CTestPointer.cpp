/*
	ポインタ変数
	配列をポインタ変数に代入
	多次元配列をポインタ配列に代入
	ポインタのポインタ
	ポインタ変数から値の代入
	ポインタ変数から値の参照
*/

#include "stdafx.h"
#include "CTest.hpp"

// ただの変数のポインタ
void CTestPointer::test1() {
	printf_s("CTestPointer::test1\n");

	int a = 100;
	int *p1 = &a;

	// 参照
	printf_s("%d \n", *p1);

	// 参照先のアドレスに値を代入
	*p1 = 200;
	printf_s("%d \n", *p1);


}

// 配列のポインタ
void CTestPointer::test2() {
	printf_s("CTestPointer::test2\n");

	int ary1[100] = { 0 };
	int *p1 = ary1;

	*(p1 + 0) = 100;
	*(p1 + 1) = 200;
	*(p1 + 2) = 300;

	for (int i = 0; i < 10; i++) {
		printf_s("%d %d \n", i, *(p1 + i));
	}

	// ポインタの移動
	int *p2 = p1 + 1;

	printf_s("%d %d %d \n", *p2, *(p2 - 1), *(p2 + 1));

}

void CTestPointer::test3() {
	printf_s("CTestPointer::test3\n");
}
