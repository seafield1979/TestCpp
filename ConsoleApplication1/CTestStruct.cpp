/*
	�\����
	���p��
	�\���̂̃r�b�g�t�B�[���h
	�\���̂̕ʖ���`
*/

#include "stdafx.h"
#include "CTest.hpp"


// �\���̂̎g�p
void CTestStruct::test1() {
	printf_s("CTestStruct::test1\n");

	// �\���̂̐錾
	StructTest1 st1;
	st1.a = 100;
	st1.b = 200;
	strcpy(st1.buf, "hoge");

	printStruct(&st1);
}

// �\���̂̓��I�m��
void CTestStruct::test2() {
	printf_s("CTestStruct::test2\n");

	// �P�̈���m��
	PStructTest1 pst = (StructTest1*)malloc(sizeof(StructTest1));
	pst->a = 100;
	pst->b = 200;
	strcpy(pst->buf, "hoge2");

	printStruct(pst);

	// �z��`���Ŋm��
	PStructTest1 pst2 = (StructTest1*)malloc(sizeof(StructTest1) * 10);

	// ���ꂼ��̗̈�ɒl����
	for (int i = 0; i < 10; i++) {
		pst = pst2 + i;
		pst->a = i;
		pst->b = i * 10;
		sprintf_s(pst->buf, "hoge%d", i);
		printStruct(pst);
	}
}

void CTestStruct::test3() {
	printf_s("CTestStruct::test3\n");
}
