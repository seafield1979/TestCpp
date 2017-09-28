#include "stdafx.h"
#include "CTest1.hpp"

/*
	コンストラクタ
*/
CTest1::CTest1() {
	// 
	c1 = 0;
}


/*
	引数ありのコンストラクタ
*/
CTest1::CTest1(char c1) {
	this->c1 = c1;
}

/*
	デストラクタ
*/
CTest1::~CTest1() {
	printf_s("CTest::destractor\n");
}


/*
	メソッド
*/
void CTest1::print1() {
	printf_s("c1=%d\n", this->c1);
}
