/*
	if��
	������
*/

#include "stdafx.h"
#include "CTest.hpp"

// ��{�I��if���̌^
void CTestIf::test1() {
	printf_s("CTestIf::test1\n");

	int id = 1;

	if (id == 0) {
		printf_s("id == 0\n");
	}
	else if (id == 1) {
		printf_s("id == 1\n");
	}
	else {
		printf_s("else\n");
	}
}

// ��r���Z�q
void CTestIf::test2() {
	printf_s("CTestIf::test2\n");

	int id = 100;

	if (id == 1) {
		printf_s("id == 1\n");
	}
	if (id != 1) {
		printf_s("id != 1\n");
	}
	if (id > 10) {
		printf_s("id > 1\n");
	}
	if (id < 10) {
		printf_s("id < 1\n");
	}
}

// ��������AND/OR
void CTestIf::test3() {
	printf_s("CTestIf::test3\n");

	// �����̏���
	int a = 1, b = 100;

	if (a > 0 && b > 0) {
		printf_s("a > 0 && b > 0\n");
	}

	if (a >= 50 || b >= 50) {
		printf_s("a >= 50 || b >= 50\n");
	}
}


// �O�����Z�q
void CTestIf::test4() {
	printf_s("CTestIf::test3\n");

	int a = 100;

	char* str = (a > 50) ? "hoge1" : "hoge2";
	printf_s("%s", str);
}
