#pragma once

/*
	テスト用の構造体
*/

#define StructBufSize		(32)

// 構造体の定義と別名定義
// StructTest1 -> struct _StructTest1 と同じ
// PStructTest1 -> struct *_StructTest1 と同じ
typedef struct _StructTest1 {
	int a;
	int b;
	char buf[StructBufSize];
}StructTest1, *PStructTest1;

// 関数の定義
void printStruct(StructTest1* st1);