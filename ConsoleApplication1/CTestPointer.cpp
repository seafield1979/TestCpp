/*
	�|�C���^�ϐ�
	�z����|�C���^�ϐ��ɑ��
	�������z����|�C���^�z��ɑ��
	�|�C���^�̃|�C���^
	�|�C���^�ϐ�����l�̑��
	�|�C���^�ϐ�����l�̎Q��
*/

#include "stdafx.h"
#include "CTest.hpp"

// �����̕ϐ��̃|�C���^
void CTestPointer::test1() {
	printf_s("CTestPointer::test1\n");

	int a = 100;
	int *p1 = &a;

	// �Q��
	printf_s("%d \n", *p1);

	// �Q�Ɛ�̃A�h���X�ɒl����
	*p1 = 200;
	printf_s("%d \n", *p1);


}

// �z��̃|�C���^
void CTestPointer::test2() {
	printf_s("CTestPointer::test2\n");

	int ary1[100] = { 0 };
	int *p1 = ary1;

	*(p1 + 0) = 100;
	*(p1 + 1) = 200;
	*(p1 + 2) = 300;

	for (int i = 0; i < 10; i++) {
		printf_s("%d %d \n", i, *(p1 + i));
	}

	// �|�C���^�̈ړ�
	int *p2 = p1 + 1;

	printf_s("%d %d %d \n", *p2, *(p2 - 1), *(p2 + 1));

}

void CTestPointer::test3() {
	printf_s("CTestPointer::test3\n");
}
