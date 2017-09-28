/*
	for文
	while文
	do ~ while文
*/

#include "stdafx.h"
#include "CTest.hpp"

// for 文
void CTestLoop::test1() {
	printf_s("CTestLoop::test1\n");

	// 指定回数ループ
	for (int i = 0; i < 10; i++) {
		printf_s("%02d ", i+1);
	}
	printf_s("\n");

	// 指定数の倍数ループ
	for (int i = 0; i < 100; i += 10) {
		printf_s("%02d ", i);
	}
	printf_s("\n");

	// 配列の要素数ループ
	int ary1[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	for (int i = 0; i < sizeof(ary1) / sizeof(int); i++) {
		printf_s("%02d ", ary1[i]);
	}
	printf_s("\n");
}

// while文
void CTestLoop::test2() {
	printf_s("CTestLoop::test2\n");

	int i = 0;
	while (i < 10) {
		printf_s("%d ", i);
		i++;
	}
	printf_s("\n");
	
	// 配列に指定の数を見つけるまでループ
	int ary1[] = { 1,2,3,4,5,6,7,8,9,10 };
	i = 0;
	while (i < sizeof(ary1) / sizeof(int)) {
		printf_s("%d ", ary1[i]);
		if (ary1[i] == 7) {
			break;
		}
		i++;
	}
	printf_s("\n");

	// 文字列を１つづつ処理
	char* str = "hogetarou!";
	
	for (int i = 0; i < strlen(str); i++) {
		printf_s("'%c' = %d ", str[i], str[i]);
	}
	printf_s("\n");
}

// do while文
void CTestLoop::test3() {
	printf_s("CTestLoop::test3\n");

	int count = 5;
	do {
		printf_s("%d ", count);
		count++;
	} while (count < 10);

	printf_s("\n");
}
