/*
	�������̊m��
	�������̊J��
	�m�ۂ����������̎g�p
	new/delete
	memalloc/memfree
*/
#include "stdafx.h"
#include "CTest.hpp"

// �e�X�g�p�N���X�̐錾
class CTest1 {
public :
	int a;
	int b;
	void print();
};

void CTest1::print() {
	printf_s("%d %d\n", this->a, this->b);
}



// C�����memalloc/free���g�p����
void CTestMemory::test1() {
	printf_s("CTestMemory::test1\n");

	// �z��`���̃��������m��
	int* buf = (int*)malloc(sizeof(int) * 100);

	// �l����
	for (int i = 0; i < 100; i++) {
		buf[i] = i + 1;
	}
	for (int i = 0; i < 100; i++) {
		printf("%d ", buf[i]);
	}
	printf_s("\n");

	// �������J��
	free(buf);
}

// �\���̂̃��������m��
void CTestMemory::test2() {
	printf_s("CTestMemory::test2\n");
	
	// �\���̂̃��������m�ہA���蓖��
	StructTest1 *st1 = (StructTest1*)malloc(sizeof(StructTest1));
	st1->a = 100;
	st1->b = 200;
	strcpy(st1->buf, "hello");

	printStruct(st1);

	// �\���̂̔z��Ƀ��������m��
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

// �������̊m�ۂƏ������A�Ċm��
void CTestMemory::test3() {
	printf_s("CTestMemory::test3\n");

	// �������̊m�ۂƏ������𓯎��ɍs��
	char* buf = (char*)calloc(100, sizeof(char));
	for (int i = 0; i < 20; i++) {
		printf_s("%d %d\n", i, buf[i]);
	}

	// �������̍Ċm��
	char* buf2 = (char*)malloc(10);
	buf2 = (char*)realloc(buf2, 20);
	if (buf2 == NULL) {
		printf_s("failed realloc()\n");
		exit(1);
	}

	// �l���Z�b�g
	// memset(�������̈�̐擪�A�h���X, �ݒ肷��l, �o�C�g��)
	char* buf3 = (char*)malloc(10);
	memset(buf3, 0, 10);

	// �������̗̈���R�s�[
	char* buf4 = (char*)malloc(10);
	memcpy(buf4, buf3, 10);
}

// new/delete�ŃN���X�̃��������m��
void CTestMemory::test4() {
	// �P�m��
	CTest1 *c1 = new CTest1();
	c1->a = 100;
	c1->b = 200;
	c1->print();

	// �z��Ŋm��
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

