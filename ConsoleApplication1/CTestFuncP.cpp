/*
	�֐��̃|�C���^
	�֐��̃|�C���^��ϐ��ɑ�����āA�ϐ����g���Ċ֐����Ăяo��
*/
#include "stdafx.h"

#include "CTest.hpp"

// �֐��̃|�C���^�̌^���`����
typedef int (*FuncP)(int, int);

int myFunc(int a, int b) {
	return a + b;
}

int myFunc2(int a, int b) {
	return a - b;
}


// �֐��̃|�C���^�����A�g�p
void CTestFuncP::test1() {
	int (*pfn)(int, int) = myFunc;
	int (*pfn2)(int, int) = myFunc2;

	printf_s("%d %d\n", pfn(10, 20), pfn2(10, 20));
}

// ��`�����^�����g�p����
void CTestFuncP::test2() {
	FuncP pfn = myFunc;
	FuncP pfn2 = myFunc2;

	printf_s("%d %d\n", pfn(10, 20), pfn2(10, 20));
}

void CTestFuncP::test3() {

}
