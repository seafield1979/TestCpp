// ConsoleApplication1.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "CTest1.hpp"
#include "CTest.hpp"
#include "CppTest.hpp"
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
void testEnum(int id) {
	CTestEnum test;
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

// ���w�֐�
void testMath(int id) {
	CTestMath test;
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
	case 4:
		test.test4();
		break;
	}
}


// �������Ǘ�
void testMemory(int id) {
	CTestMemory test;
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
	case 4:
		test.test4();
		break;
	}
}

// �z��
void testArray(int id) {
	CTestArray test;
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

// �r�b�g���Z
void testExp(int id) {
	CTestExp test;
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

// �N���X
void testClass(int id) {
	CTestClass test;
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

// �N���X�A�N�Z�X
void testClass2(int id) {
	CTestClassAccess test;
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

// �N���X �p��
void testClass3(int id) {
	CTestClassInherit test;
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

// �t�@�C������
void testFile(int id) {
	CTestFile test;
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
	case 4:
		test.test4();
		break;
	case 5:
		test.test5();
		break;
	}
}

// �֐�
void testFunc(int id) {
	CTestFunc test;
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
	case 4:
		test.test4();
		break;
	case 5:
		test.test5();
		break;
	case 6:
		test.test6();
		break;
	}
}

// �֐��|�C���^
void testFuncP(int id) {
	CTestFuncP test;
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
	case 4:
		test.test4();
		break;
	}
}

// �|�C���^
void testPointer(int id) {
	CTestPointer test;
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


// �}�N��
void testMacro(int id) {
	CTestMacro test;
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

// �\���́A���p��
void testStr(int id) {
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

// �\���́A���p��
void testStruct(int id) {
	CTestStruct test;
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

// �������Ǘ�
void testUnion(int id) {
	CTestUnion test;
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

// switch��
void testSwitch(int id) {
	CTestSwitch test;
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

// �ϐ�
void testVar(int id) {
	CTestVar test;
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

// Cpp�e�X�g�x�[�X
void testCBase1(int id) {
	CppTestBase1 test;

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
	case 4:
		test.test4();
		break;
	}
}

// c++ �A�N�Z�X����
void testCAccess(int id) {
	CppTestAccess test;

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

//  C++ friend
void testCFriend(int id) {
	CppTestFriend test;

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

// C++ �p��
void testCInherit(int id) {
	CppTestInherit test;

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

// �C�����C���֐�
void testCInlineFunc(int id) {
	CppTestInline test;

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

// C++ namespace
void testNamespace(int id) {
	CppTestNameSpace test;

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

// c++ �I�[�o�[���[�h
void testOverload1(int id) {
	CppTestOverload test;

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

// c++ ���Z�q�̃I�[�o�[���[�h
void testOverload2(int id) {
	CppTestOverload2 test;

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

// c++ �N���X�̎Q��
void testCRef(int id) {
	CppTestRef test;

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

// c++ ���z�N���X�A���z�֐�
void testVirtual(int id) {
	CppTestVirtual test;

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


// c++ �e���v���[�g
void testTemplate(int id) {
	CppTestTemplate test;

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
		else if (strcmp(info->code, "enum") == 0) {
			testEnum(info->id);
		}
		else if (strcmp(info->code, "array") == 0 || strcmp(info->code, "ary") == 0) {
			testArray(info->id);
		}
		else if (strcmp(info->code, "exp") == 0) {
			testExp(info->id);
		}
		else if (strcmp(info->code, "class") == 0) {
			testClass(info->id);
		}
		else if (strcmp(info->code, "class2") == 0) {
			testClass2(info->id);
		}
		else if (strcmp(info->code, "class3") == 0) {
			testClass3(info->id);
		}
		else if (strcmp(info->code, "file") == 0) {
			testFile(info->id);
		}
		else if (strcmp(info->code, "func") == 0) {
			testFunc(info->id);
		}
		else if (strcmp(info->code, "funcp") == 0) {
			testFuncP(info->id);
		}
		else if (strcmp(info->code, "loop") == 0) {
			testLoop(info->id);
		}
		else if (strcmp(info->code, "macro") == 0) {
			testMacro(info->id);
		}
		else if (strcmp(info->code, "math") == 0) {
			testMath(info->id);
		}
		else if (strcmp(info->code, "mem") == 0) {
			testMemory(info->id);
		}
		else if (strcmp(info->code, "pointer") == 0) {
			testPointer(info->id);
		}
		else if (strcmp(info->code, "str") == 0) {
			testStr(info->id);
		}
		else if (strcmp(info->code, "struct") == 0) {
			testStruct(info->id);
		}
		else if (strcmp(info->code, "switch") == 0) {
			testSwitch(info->id);
		}
		else if (strcmp(info->code, "var") == 0) {
			testVar(info->id);
		}
		else if (strcmp(info->code, "if") == 0) {
			testIf(info->id);
		}
		else if (strcmp(info->code, "union") == 0) {
			testUnion(info->id);
		}
		else if (strcmp(info->code, "base1") == 0) {
			testCBase1(info->id);
		}
		else if (strcmp(info->code, "access") == 0) {
			testCAccess(info->id);
		}
		else if (strcmp(info->code, "friend") == 0) {
			testCFriend(info->id);
		}

		else if (strcmp(info->code, "ref") == 0) {
			testCRef(info->id);
		}
		else if (strcmp(info->code, "inherit") == 0) {
			testCInherit(info->id);
		}
		else if (strcmp(info->code, "inline") == 0) {
			testCInlineFunc(info->id);
		}
		else if (strcmp(info->code, "namespace") == 0) {
			testNamespace(info->id);
		}
		else if (strcmp(info->code, "overload") == 0) {
			testOverload1(info->id);
		}
		else if (strcmp(info->code, "overload2") == 0) {
			testOverload2(info->id);
		}
		else if (strcmp(info->code, "template") == 0) {
			testTemplate(info->id);
		}
		else if (strcmp(info->code, "virtual") == 0) {
			testVirtual(info->id);
		}
		else {
			printf_s("not found!\n");
		}

		printf_s("input test code: ");
		gets_s(buf, MAX_LEN);
		if (strlen(buf) == 0) {
			break;
		}
		info = getTestInfo(buf);
	}

	printf_s("exit!");

	return 0;
}

