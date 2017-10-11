/*
	�v���v���Z�b�T
	define
	��������define
	#if ~ #elseif #else
	�V�����^�� typedef
*/

#include "stdafx.h"
#include "CTest.hpp"

#define D1   (100)
#define STR1   "hoge"

// �������}�N��
#define ADD(a,b)  (a + b)

// �������}�N�� (���s)
#define ADD2(a,b,c,d)   (a + b + \
						c + d)

// �����t�R���p�C���̃X�C�b�`
#define SWITCH1    (1)

// �^�̕ʖ���`
typedef int		sint32;
typedef char	c1;

// �}�N�����g�p
void CTestMacro::test1() {
	printf_s("CTestMacro::test1\n");

	printf_s("%d %s\n", D1, STR1);

	printf_s("%d\n", ADD(10, 20));
	printf_s("%d\n", ADD2(10, 20, 30, 40));

	sint32 i1 = 100;
	c1 i2 = 50;

	printf_s("%d %d\n", i1, i2);
}

void CTestMacro::test2() {
	printf_s("CTestMacro::test2\n");

	// �����R���p�C��
#if SWITCH1 == 1
	printf_s("switch1\n");
#elif SWITCH1 == 2
	printf_s("switch2\n");
#elif SWITCH1 == 3
	printf_s("switch3\n");
#else
	printf_s("other\n");
#endif

}

void CTestMacro::test3() {
	printf_s("CTestMacro::test3\n");
}
