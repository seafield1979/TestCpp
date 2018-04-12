// ConsoleApplication1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "CTest1.hpp"
#include "CTest.hpp"
#include "CppTest.hpp"
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
void testEnum(int id) {
	CTestEnum test;
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

// 数学関数
void testMath(int id) {
	CTestMath test;
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
	case 4:
		test.test4();
		break;
	}
}


// メモリ管理
void testMemory(int id) {
	CTestMemory test;
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
	case 4:
		test.test4();
		break;
	}
}

// 配列
void testArray(int id) {
	CTestArray test;
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

// ビット演算
void testExp(int id) {
	CTestExp test;
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

// クラス
void testClass(int id) {
	CTestClass test;
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

// クラスアクセス
void testClass2(int id) {
	CTestClassAccess test;
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

// クラス 継承
void testClass3(int id) {
	CTestClassInherit test;
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

// ファイル操作
void testFile(int id) {
	CTestFile test;
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
	case 4:
		test.test4();
		break;
	case 5:
		test.test5();
		break;
	}
}

// 関数
void testFunc(int id) {
	CTestFunc test;
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
	case 4:
		test.test4();
		break;
	case 5:
		test.test5();
		break;
	case 6:
		test.test6();
		break;
	}
}

// 関数ポインタ
void testFuncP(int id) {
	CTestFuncP test;
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
	case 4:
		test.test4();
		break;
	}
}

// ポインタ
void testPointer(int id) {
	CTestPointer test;
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


// マクロ
void testMacro(int id) {
	CTestMacro test;
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

// 構造体、共用体
void testStr(int id) {
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

// 構造体、共用体
void testStruct(int id) {
	CTestStruct test;
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

// メモリ管理
void testUnion(int id) {
	CTestUnion test;
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

// switch文
void testSwitch(int id) {
	CTestSwitch test;
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

// 変数
void testVar(int id) {
	CTestVar test;
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

// Cppテストベース
void testCBase1(int id) {
	CppTestBase1 test;

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
	case 4:
		test.test4();
		break;
	}
}

// c++ アクセス制限
void testCAccess(int id) {
	CppTestAccess test;

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

//  C++ friend
void testCFriend(int id) {
	CppTestFriend test;

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

// C++ 継承
void testCInherit(int id) {
	CppTestInherit test;

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

// インライン関数
void testCInlineFunc(int id) {
	CppTestInline test;

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

// C++ namespace
void testNamespace(int id) {
	CppTestNameSpace test;

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

// c++ オーバーロード
void testOverload1(int id) {
	CppTestOverload test;

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

// c++ 演算子のオーバーロード
void testOverload2(int id) {
	CppTestOverload2 test;

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

// c++ クラスの参照
void testCRef(int id) {
	CppTestRef test;

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

// c++ 仮想クラス、仮想関数
void testVirtual(int id) {
	CppTestVirtual test;

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


// c++ テンプレート
void testTemplate(int id) {
	CppTestTemplate test;

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
		else if (strcmp(info->code, "enum") == 0) {
			testEnum(info->id);
		}
		else if (strcmp(info->code, "array") == 0 || strcmp(info->code, "ary") == 0) {
			testArray(info->id);
		}
		else if (strcmp(info->code, "exp") == 0) {
			testExp(info->id);
		}
		else if (strcmp(info->code, "class") == 0) {
			testClass(info->id);
		}
		else if (strcmp(info->code, "class2") == 0) {
			testClass2(info->id);
		}
		else if (strcmp(info->code, "class3") == 0) {
			testClass3(info->id);
		}
		else if (strcmp(info->code, "file") == 0) {
			testFile(info->id);
		}
		else if (strcmp(info->code, "func") == 0) {
			testFunc(info->id);
		}
		else if (strcmp(info->code, "funcp") == 0) {
			testFuncP(info->id);
		}
		else if (strcmp(info->code, "loop") == 0) {
			testLoop(info->id);
		}
		else if (strcmp(info->code, "macro") == 0) {
			testMacro(info->id);
		}
		else if (strcmp(info->code, "math") == 0) {
			testMath(info->id);
		}
		else if (strcmp(info->code, "mem") == 0) {
			testMemory(info->id);
		}
		else if (strcmp(info->code, "pointer") == 0) {
			testPointer(info->id);
		}
		else if (strcmp(info->code, "str") == 0) {
			testStr(info->id);
		}
		else if (strcmp(info->code, "struct") == 0) {
			testStruct(info->id);
		}
		else if (strcmp(info->code, "switch") == 0) {
			testSwitch(info->id);
		}
		else if (strcmp(info->code, "var") == 0) {
			testVar(info->id);
		}
		else if (strcmp(info->code, "if") == 0) {
			testIf(info->id);
		}
		else if (strcmp(info->code, "union") == 0) {
			testUnion(info->id);
		}
		else if (strcmp(info->code, "base1") == 0) {
			testCBase1(info->id);
		}
		else if (strcmp(info->code, "access") == 0) {
			testCAccess(info->id);
		}
		else if (strcmp(info->code, "friend") == 0) {
			testCFriend(info->id);
		}

		else if (strcmp(info->code, "ref") == 0) {
			testCRef(info->id);
		}
		else if (strcmp(info->code, "inherit") == 0) {
			testCInherit(info->id);
		}
		else if (strcmp(info->code, "inline") == 0) {
			testCInlineFunc(info->id);
		}
		else if (strcmp(info->code, "namespace") == 0) {
			testNamespace(info->id);
		}
		else if (strcmp(info->code, "overload") == 0) {
			testOverload1(info->id);
		}
		else if (strcmp(info->code, "overload2") == 0) {
			testOverload2(info->id);
		}
		else if (strcmp(info->code, "template") == 0) {
			testTemplate(info->id);
		}
		else if (strcmp(info->code, "virtual") == 0) {
			testVirtual(info->id);
		}
		else {
			printf_s("not found!\n");
		}

		printf_s("input test code: ");
		gets_s(buf, MAX_LEN);
		if (strlen(buf) == 0) {
			break;
		}
		info = getTestInfo(buf);
	}

	printf_s("exit!");

	return 0;
}

