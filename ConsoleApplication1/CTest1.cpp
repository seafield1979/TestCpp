#include "stdafx.h"
#include "CTest1.hpp"

/*
	�R���X�g���N�^
*/
CTest1::CTest1() {
	// 
	c1 = 0;
}


/*
	��������̃R���X�g���N�^
*/
CTest1::CTest1(char c1) {
	this->c1 = c1;
}

/*
	�f�X�g���N�^
*/
CTest1::~CTest1() {
	printf_s("CTest::destractor\n");
}


/*
	���\�b�h
*/
void CTest1::print1() {
	printf_s("c1=%d\n", this->c1);
}
