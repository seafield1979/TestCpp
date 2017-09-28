/*
	配列の宣言
	配列要素のループ処理
	配列の要素数
	多次元配列
*/

#include "stdafx.h"
#include "CTest.hpp"

// 配列の基本
void CTestArray::test1() {
	printf_s("CTestArray::test1\n");

	// 配列変数の宣言(要素数を指定する)
	int ary1[10];
	for (int i = 0; i < sizeof(ary1) / sizeof(int); i++) {
		ary1[i] = i + 1;
		printf_s("ary1[%d] = %d\n", i, ary1[i]);
	}


	// 初期値つき配列
	int ary2[] = { 10,11,12,13,14,15 };
	for (int i = 0; i < sizeof(ary2) / sizeof(int); i++) {
		printf_s("ary2[%d] = %d\n", i, ary2[i]);
	}

	// 配列の要素数
	printf_s("size = %d\n", sizeof(ary2) / sizeof(int));

}

// 多次元配列
void CTestArray::test2() {
	printf_s("CTestArray::test2\n");

	int ary1[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			ary1[i][j] = i * 10 + j;
			printf("ary1[%d][%d] = %d\n", i, j, ary1[i][j]);
		}
	}

	int ary2[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			ary1[i][j] = i * 10 + j;
			printf("ary2[%d][%d] = %d\n", i, j, ary2[i][j]);
		}
	}

}

// 配列の要素をポインタに格納する
void CTestArray::test3() {
	printf_s("CTestArray::test3\n");

	int ary1[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p1 = &ary1[4];
	printf_s("%d %d\n", *p1, *(p1+1));
}
