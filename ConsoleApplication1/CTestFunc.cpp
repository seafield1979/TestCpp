/*
	関数の宣言、呼び出し
	関数の引数（仮引数、実引数）
	関数の戻り値
	関数ポインタ
	参照体の引数
	ポインタ変数の引数
	ポインタ変数の戻り値
	inline関数
*/
#include "stdafx.h"
#include "CTest.hpp"

typedef struct _ST1 {
	int num1;
	int num2;
} ST1;

// 呼び出しよう関数
void func1() {
	printf_s("hogehoge\n");
}

void func2(char *str, int num) {
	printf_s("str:%s num:%d\n", str, num);
}

// 戻り値のある関数
int func3(int num1, int num2) {
	return num1 + num2;
}

// 引数として参照を受け取る
void func4(ST1 &st1) {
	printf_s("%d %d\n", st1.num1, st1.num2);
}

// 引数としてアドレスを受け取る
void func5(ST1 *st1) {
	// 参照先の構造体の値を書き換えてみる
	st1->num1 = 100;
	st1->num2 = 200;
}

// 引数として配列のポインタ(配列)を受け取る
void func6(int *ary1) {
	*(ary1 + 0) = 1;
	*(ary1 + 1) = 2;
	*(ary1 + 2) = 3;
}


// 引数なし、戻り値なしの関数を呼び出す
void CTestFunc::test1() {
	printf_s("CTestFunc::test1\n");

	func1();
}

// 引数ありの関数を呼び出す
void CTestFunc::test2() {
	printf_s("CTestFunc::test2\n");

	func2("test2", 1);
}

// 引数あり、戻り値の関数を呼び出す
void CTestFunc::test3() {
	printf_s("CTestFunc::test3\n");

	int i = func3(100, 200);
	printf_s("i = %d\n", i);
}

// 構造体を参照渡しする
void CTestFunc::test4() {
	printf_s("CTestFunc::test4\n");

	ST1 st1;
	st1.num1 = 1;
	st1.num2 = 2;
	func4(st1);
}

// 構造体のアドレスを渡して、関数の中で値を変更する
void CTestFunc::test5() {
	printf_s("CTestFunc::test5\n");

	ST1 st1;
	func5(&st1);
	printf_s("%d %d\n", st1.num1, st1.num2);
}

// 配列のポインタを渡して、関数の中で値を変更する
void CTestFunc::test6() {
	printf_s("CTestFunc::test6\n");

	int ary1[10] = { 0 };
	func6(ary1);

	for (int i = 0; i < 10; i++) {
		printf_s("[%d] = %d\n", i, ary1[i]);
	}
}


