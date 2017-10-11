/*
	メモリの確保
	メモリの開放
	確保したメモリの使用
	new/delete
	memalloc/memfree
*/
#include "stdafx.h"
#include "CTest.hpp"

// テスト用クラスの宣言
class CTest1 {
public :
	int a;
	int b;
	void print();
};

void CTest1::print() {
	printf_s("%d %d\n", this->a, this->b);
}



// C言語のmemalloc/freeを使用する
void CTestMemory::test1() {
	printf_s("CTestMemory::test1\n");

	// 配列形式のメモリを確保
	int* buf = (int*)malloc(sizeof(int) * 100);

	// 値を代入
	for (int i = 0; i < 100; i++) {
		buf[i] = i + 1;
	}
	for (int i = 0; i < 100; i++) {
		printf("%d ", buf[i]);
	}
	printf_s("\n");

	// メモリ開放
	free(buf);
}

// 構造体のメモリを確保
void CTestMemory::test2() {
	printf_s("CTestMemory::test2\n");
	
	// 構造体のメモリを確保、割り当て
	StructTest1 *st1 = (StructTest1*)malloc(sizeof(StructTest1));
	st1->a = 100;
	st1->b = 200;
	strcpy(st1->buf, "hello");

	printStruct(st1);

	// 構造体の配列にメモリを確保
	StructTest1 *st2 = (StructTest1*)malloc(sizeof(StructTest1) * 2);
	st2[0].a = 1;
	st2[0].b = 2;
	strcpy(st2[0].buf, "hello");

	st2[1].a = 3;
	st2[1].b = 4;
	strcpy(st2[1].buf, "world");

	for (int i = 0; i < 2; i++) {
		printStruct(st2 + i);
	}
}

// メモリの確保と初期化、再確保
void CTestMemory::test3() {
	printf_s("CTestMemory::test3\n");

	// メモリの確保と初期化を同時に行う
	char* buf = (char*)calloc(100, sizeof(char));
	for (int i = 0; i < 20; i++) {
		printf_s("%d %d\n", i, buf[i]);
	}

	// メモリの再確保
	char* buf2 = (char*)malloc(10);
	buf2 = (char*)realloc(buf2, 20);
	if (buf2 == NULL) {
		printf_s("failed realloc()\n");
		exit(1);
	}

	// 値をセット
	// memset(メモリ領域の先頭アドレス, 設定する値, バイト数)
	char* buf3 = (char*)malloc(10);
	memset(buf3, 0, 10);

	// メモリの領域をコピー
	char* buf4 = (char*)malloc(10);
	memcpy(buf4, buf3, 10);
}

// new/deleteでクラスのメモリを確保
void CTestMemory::test4() {
	// １つ確保
	CTest1 *c1 = new CTest1();
	c1->a = 100;
	c1->b = 200;
	c1->print();

	// 配列で確保
	CTest1* cary[2];
	cary[0] = new CTest1();
	cary[1] = new CTest1();

	cary[0]->a = 1;
	cary[0]->b = 2;
	cary[1]->a = 3;
	cary[1]->b = 4;

	for (int i = 0; i < 2; i++) {
		cary[i]->print();
	}

}

