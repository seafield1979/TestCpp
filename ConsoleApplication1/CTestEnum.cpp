/*
	列挙体 enum 
*/

#include "stdafx.h"
#include "CTest.hpp"

// ただのenum
// enumで定義した値の実態は整数値
void CTestEnum::test1() {
	printf_s("CTestEnum::test1\n");

	enum {
		e1 = 0,
		e2,
		e3
	};
	printf_s("%d %d %d\n", e1, e2, e3);
}

// 値を設定したenum
void CTestEnum::test2() {
	printf_s("CTestEnum::test2\n");

	enum {
		e1 = 100,
		e2 = 200,
		e3 = 300
	};
	printf_s("%d %d %d\n", e1, e2, e3);
}

// typedefで変数の型名として使用できるようにする
typedef enum
{
	EM1 = 0,
	EM2,
	EM3
}E_MODE;


// 関数の引数として別名定義されたenumを使用する
void printMode(E_MODE mode) {
	printf_s("mode = %d\n", mode);
}

void CTestEnum::test3() {
	printf_s("CTestEnum::test3\n");

	printMode(EM2);
}
