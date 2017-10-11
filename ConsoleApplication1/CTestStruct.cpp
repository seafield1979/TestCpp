/*
	構造体
	共用体
	構造体のビットフィールド
	構造体の別名定義
*/

#include "stdafx.h"
#include "CTest.hpp"


// 構造体の使用
void CTestStruct::test1() {
	printf_s("CTestStruct::test1\n");

	// 構造体の宣言
	StructTest1 st1;
	st1.a = 100;
	st1.b = 200;
	strcpy(st1.buf, "hoge");

	printStruct(&st1);
}

// 構造体の動的確保
void CTestStruct::test2() {
	printf_s("CTestStruct::test2\n");

	// １つ領域を確保
	PStructTest1 pst = (StructTest1*)malloc(sizeof(StructTest1));
	pst->a = 100;
	pst->b = 200;
	strcpy(pst->buf, "hoge2");

	printStruct(pst);

	// 配列形式で確保
	PStructTest1 pst2 = (StructTest1*)malloc(sizeof(StructTest1) * 10);

	// それぞれの領域に値を代入
	for (int i = 0; i < 10; i++) {
		pst = pst2 + i;
		pst->a = i;
		pst->b = i * 10;
		sprintf_s(pst->buf, "hoge%d", i);
		printStruct(pst);
	}
}

void CTestStruct::test3() {
	printf_s("CTestStruct::test3\n");
}
