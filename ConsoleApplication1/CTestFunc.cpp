/*
	�֐��̐錾�A�Ăяo��
	�֐��̈����i�������A�������j
	�֐��̖߂�l
	�֐��|�C���^
	�Q�Ƒ̂̈���
	�|�C���^�ϐ��̈���
	�|�C���^�ϐ��̖߂�l
	inline�֐�
*/
#include "stdafx.h"
#include "CTest.hpp"

typedef struct _ST1 {
	int num1;
	int num2;
} ST1;

// �Ăяo���悤�֐�
void func1() {
	printf_s("hogehoge\n");
}

void func2(char *str, int num) {
	printf_s("str:%s num:%d\n", str, num);
}

// �߂�l�̂���֐�
int func3(int num1, int num2) {
	return num1 + num2;
}

// �����Ƃ��ĎQ�Ƃ��󂯎��
void func4(ST1 &st1) {
	printf_s("%d %d\n", st1.num1, st1.num2);
}

// �����Ƃ��ăA�h���X���󂯎��
void func5(ST1 *st1) {
	// �Q�Ɛ�̍\���̂̒l�����������Ă݂�
	st1->num1 = 100;
	st1->num2 = 200;
}

// �����Ƃ��Ĕz��̃|�C���^(�z��)���󂯎��
void func6(int *ary1) {
	*(ary1 + 0) = 1;
	*(ary1 + 1) = 2;
	*(ary1 + 2) = 3;
}


// �����Ȃ��A�߂�l�Ȃ��̊֐����Ăяo��
void CTestFunc::test1() {
	printf_s("CTestFunc::test1\n");

	func1();
}

// ��������̊֐����Ăяo��
void CTestFunc::test2() {
	printf_s("CTestFunc::test2\n");

	func2("test2", 1);
}

// ��������A�߂�l�̊֐����Ăяo��
void CTestFunc::test3() {
	printf_s("CTestFunc::test3\n");

	int i = func3(100, 200);
	printf_s("i = %d\n", i);
}

// �\���̂��Q�Ɠn������
void CTestFunc::test4() {
	printf_s("CTestFunc::test4\n");

	ST1 st1;
	st1.num1 = 1;
	st1.num2 = 2;
	func4(st1);
}

// �\���̂̃A�h���X��n���āA�֐��̒��Œl��ύX����
void CTestFunc::test5() {
	printf_s("CTestFunc::test5\n");

	ST1 st1;
	func5(&st1);
	printf_s("%d %d\n", st1.num1, st1.num2);
}

// �z��̃|�C���^��n���āA�֐��̒��Œl��ύX����
void CTestFunc::test6() {
	printf_s("CTestFunc::test6\n");

	int ary1[10] = { 0 };
	func6(ary1);

	for (int i = 0; i < 10; i++) {
		printf_s("[%d] = %d\n", i, ary1[i]);
	}
}


