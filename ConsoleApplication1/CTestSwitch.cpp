/*
	switch��
*/

#include "stdafx.h"
#include "CTest.hpp"

// ������switch��(�Ƃ͂����Ă�C����͐����l����switch����ł��Ȃ�)
void CTestSwitch::test1() {
	printf_s("CTestSwitch::test1\n");

	int a = 7;

	switch (a) {
	case 1:
		printf_s("1\n");
		break;
	case 2:
		printf_s("2\n");
		break;
	case 3:
		printf_s("3\n");
		break;
	case 4:
		printf_s("4\n");
		break;
	case 5:
		printf_s("5\n");
		break;
	case 6:
		printf_s("6\n");
		break;
	case 7:
		printf_s("7\n");
		break;
	}
}

// enum�̒l���g�p����
enum EHoge {
	hoge1 = 0,
	hoge2,
	hoge3,
	hoge4,
	hoge5
};
void CTestSwitch::test2() {
	printf_s("CTestSwitch::test2\n");

	int hoge = hoge3;

	switch (hoge) {
	case hoge1:
		printf_s("hoge1\n");
		break;
	case hoge2:
		printf_s("hoge2\n");
		break;
	case hoge3:
		printf_s("hoge3\n");
		break;
	case hoge4:
		printf_s("hoge4\n");
		break;
	case hoge5:
		printf_s("hoge5\n");
		break;
	}
}

void CTestSwitch::test3() {
	printf_s("CTestSwitch::test3\n");
}
