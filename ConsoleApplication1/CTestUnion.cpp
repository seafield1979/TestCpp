/*
	共用体(Union)

	同じ領域に複数の変数を割り当てられる。共用体を使用すると配列化した場合に、要素によって使用するデータを使い分けることができる。
*/
#include "stdafx.h"
#include "CTest.hpp"

// 構造体
typedef struct _Struct1 {
	int a;
	int b;
}St1;

typedef struct _Struct2 {
	char buf[10];
}St2;

// 共用体
// a, b, buf は同じアドレスに配置される。この場合unionの中で定義された一番サイズが大きい変数が
// このunionのサイズになる
typedef union _UnionTest1 {
	int a;
	int b;
	char buf[10];
}UnionTest1;

typedef union _UnionTest2 {
	St1 st1;
	St2 st2;
}UnionTest2;

// Unionの中に異なる変数を配置
void CTestUnion::test1() {
	UnionTest1 union1;

	union1.a = 100;
	union1.b = 200;
	union1.buf[0] = 1;
	union1.buf[1] = 2;

	// unionは同じアドレスを共有するので a の値は上書きされている
	printf_s("%d\n", union1.a);
}

// Unionの中に異なる構造体を配置
void CTestUnion::test2() {
	UnionTest2 ary[2];

	// 配列の各要素で使用する構造体を変える
	ary[0].st1.a = 100;
	ary[0].st1.b = 200;

	ary[1].st2.buf[0] = 10;
	ary[1].st2.buf[1] = 20;
	ary[1].st2.buf[2] = 30;
	ary[1].st2.buf[3] = 40;

	printf_s("ary[0] %d %d\n", ary[0].st1.a, ary[0].st1.b);
	printf_s("ary[1] %d %d %d %d\n", ary[1].st2.buf[0], ary[1].st2.buf[1], ary[1].st2.buf[2], ary[1].st2.buf[3]);
}

void CTestUnion::test3() {

}