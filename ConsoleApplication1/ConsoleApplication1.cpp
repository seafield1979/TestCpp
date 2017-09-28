// ConsoleApplication1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "CTest1.hpp"
#include "CTest.hpp"
#include <iostream>
#include <string>

using namespace std;

// 文字列バッファの最大サイズ
#define MAX_LEN (100)

typedef struct _TestInfo {
	char* code;
	int   id;
} TestInfo;


void func01() {
	printf_s("func01\n");
}

void test_var() {

}

void testClass1() {
	CTest1 test1;
	CTest1* test2 = new CTest1();
	CTest1 test3(100);

	test1.print1();
	test2->print1();
	test3.print1();
	
	//delete test2;
	test2->print1();		// これはエラー・・・にならない！

	test2 = NULL;
	// test2->print1();		// これはエラーになる
}

/*
	標準入力からテスト情報を取得する
*/
TestInfo* getTestInfo(char* str) {
	TestInfo* info = new TestInfo();
	
	// テストコードを取得
	info->code = strtok(str, " ");
	if (info->code == NULL) {
		return NULL;
	}

	// テストIDを整数で取得
	char* id = strtok(NULL, " ");
	if (id == NULL) {
		return info;
	}
	info->id = atoi(id);

	return info;
}

/*
	標準入力から数字を取得し、整数で返す
*/
char getTestId() {
	int testId = 0;
	char buf[MAX_LEN];

	if (NULL != gets_s(buf, MAX_LEN)) {
		return atoi(buf);
	}
	return 0;
}


/*
	個別テストメソッド
*/
// 文字列
void testStr(int id) {
	printf_s("testStr\n");

	CTestStr test;
	switch (id) {
	case 1:
		test.test1();
		break;
	case 2:
		test.test2();
		break;
	case 3:
		test.test3();
		break;
	}
}

// if文
void testIf(int id) {
	printf_s("testIf\n");

	CTestIf test;
	switch (id) {
	case 1:
		test.test1();
		break;
	case 2:
		test.test2();
		break;
	case 3:
		test.test3();
		break;
	}
}

// ループ
void testLoop(int id) {
	printf_s("testLoop\n");

	CTestLoop test;
	switch (id) {
	case 1:
		test.test1();
		break;
	case 2:
		test.test2();
		break;
	case 3:
		test.test3();
		break;
	}
}


int main()
{
	char buf[MAX_LEN] = { 0 };
	TestInfo* info = NULL;

	printf_s("please input test code: ");

	gets_s(buf, MAX_LEN);
	info = getTestInfo(buf);
	if (info == NULL) {
		return 0;
	}

	while (true) {
		if (strcmp(info->code ,"e") == 0 || strcmp(info->code, "exit") == 0) {
			break;
		}

		if (strcmp(info->code, "str") == 0) {
			testStr(info->id);
		}
		else if (strcmp(info->code, "if") == 0) {
			testIf(info->id);
		}
		else if (strcmp(info->code, "loop") == 0) {
			testLoop(info->id);
		}

		printf_s("input test code: ");
		gets_s(buf, MAX_LEN);
		info = getTestInfo(buf);
	}

	printf_s("exit!");

	getchar();

	return 0;
}

