/*
	プリプロセッサ
	define
	引数ありdefine
	#if ~ #elseif #else
	新しい型名 typedef
*/

#include "stdafx.h"
#include "CTest.hpp"

#define D1   (100)
#define STR1   "hoge"

// 引数つきマクロ
#define ADD(a,b)  (a + b)

// 引数つきマクロ (改行)
#define ADD2(a,b,c,d)   (a + b + \
						c + d)

// 条件付コンパイルのスイッチ
#define SWITCH1    (1)

// 型の別名定義
typedef int		sint32;
typedef char	c1;

// マクロを使用
void CTestMacro::test1() {
	printf_s("CTestMacro::test1\n");

	printf_s("%d %s\n", D1, STR1);

	printf_s("%d\n", ADD(10, 20));
	printf_s("%d\n", ADD2(10, 20, 30, 40));

	sint32 i1 = 100;
	c1 i2 = 50;

	printf_s("%d %d\n", i1, i2);
}

void CTestMacro::test2() {
	printf_s("CTestMacro::test2\n");

	// 条件コンパイル
#if SWITCH1 == 1
	printf_s("switch1\n");
#elif SWITCH1 == 2
	printf_s("switch2\n");
#elif SWITCH1 == 3
	printf_s("switch3\n");
#else
	printf_s("other\n");
#endif

}

void CTestMacro::test3() {
	printf_s("CTestMacro::test3\n");
}
