// ConsoleApplication1.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "CTest1.hpp"
#include "CTest.hpp"
#include <iostream>
#include <string>

using namespace std;

// ������o�b�t�@�̍ő�T�C�Y
#define MAX_LEN (100)

typedef struct _TestInfo {
	char* code;
	int   id;
} TestInfo;


void func01() {
	printf_s("func01\n");
}

void test_var() {

}

void testClass1() {
	CTest1 test1;
	CTest1* test2 = new CTest1();
	CTest1 test3(100);

	test1.print1();
	test2->print1();
	test3.print1();
	
	//delete test2;
	test2->print1();		// ����̓G���[�E�E�E�ɂȂ�Ȃ��I

	test2 = NULL;
	// test2->print1();		// ����̓G���[�ɂȂ�
}

/*
	�W�����͂���e�X�g�����擾����
*/
TestInfo* getTestInfo(char* str) {
	TestInfo* info = new TestInfo();
	
	// �e�X�g�R�[�h���擾
	info->code = strtok(str, " ");
	if (info->code == NULL) {
		return NULL;
	}

	// �e�X�gID�𐮐��Ŏ擾
	char* id = strtok(NULL, " ");
	if (id == NULL) {
		return info;
	}
	info->id = atoi(id);

	return info;
}

/*
	�W�����͂��琔�����擾���A�����ŕԂ�
*/
char getTestId() {
	int testId = 0;
	char buf[MAX_LEN];

	if (NULL != gets_s(buf, MAX_LEN)) {
		return atoi(buf);
	}
	return 0;
}


/*
	�ʃe�X�g���\�b�h
*/
// ������
void testStr(int id) {
	printf_s("testStr\n");

	CTestStr test;
	switch (id) {
	case 1:
		test.test1();
		break;
	case 2:
		test.test2();
		break;
	case 3:
		test.test3();
		break;
	}
}

// if��
void testIf(int id) {
	printf_s("testIf\n");

	CTestIf test;
	switch (id) {
	case 1:
		test.test1();
		break;
	case 2:
		test.test2();
		break;
	case 3:
		test.test3();
		break;
	}
}

// ���[�v
void testLoop(int id) {
	printf_s("testLoop\n");

	CTestLoop test;
	switch (id) {
	case 1:
		test.test1();
		break;
	case 2:
		test.test2();
		break;
	case 3:
		test.test3();
		break;
	}
}


int main()
{
	char buf[MAX_LEN] = { 0 };
	TestInfo* info = NULL;

	printf_s("please input test code: ");

	gets_s(buf, MAX_LEN);
	info = getTestInfo(buf);
	if (info == NULL) {
		return 0;
	}

	while (true) {
		if (strcmp(info->code ,"e") == 0 || strcmp(info->code, "exit") == 0) {
			break;
		}

		if (strcmp(info->code, "str") == 0) {
			testStr(info->id);
		}
		else if (strcmp(info->code, "if") == 0) {
			testIf(info->id);
		}
		else if (strcmp(info->code, "loop") == 0) {
			testLoop(info->id);
		}

		printf_s("input test code: ");
		gets_s(buf, MAX_LEN);
		info = getTestInfo(buf);
	}

	printf_s("exit!");

	getchar();

	return 0;
}

