/*
	friend
	friend�N���X
		friend�Ŏ����̃N���X��private�����o�A���\�b�h�ɃA�N�Z�X�ł���N���X��������

	friend���\�b�h
		static ���\�b�h��private�����o�A���\�b�h�ł��錠����t�^����
		�P�̃N���X�Ŋ�������B
*/
#include "stdafx.h"
#include "CppTest.hpp"

class CFriend1;
class CFriend2;

// �P�߂̃N���X
class CFriend1 {
	// friend�Ŏ��g�̃N���X��private�ɃA�N�Z�X��������N���X���w�肷��
	// �����ł� CFriend2���w�肵�Ă��邽�� CFriedn2�̃��\�b�h���� CFriend1��private���\�b�h�A�����o�ɃA�N�Z�X�ł���
	friend class CFriend2;

public:
	void setName(char* name);
private:
	char *name;
	void func1();
public:
	friend void func2(CFriend1 &f1);
};

void CFriend1::setName(char* name) {
	this->name = name;
}

void CFriend1::func1() {
	printf_s("CFriend1::func1()\n");
}

void func2(CFriend1 &f1) {
	printf_s("CFriend1::func2() %s \n", f1.name);
}

// �Q�߂̃N���X
class CFriend2 {

public:
	void func1();
};

void CFriend2::func1() {
	printf_s("CFriend2::func1()\n");

	CFriend1 f1;

	// CFriend1�� CFriend2��friend�����Ă���̂�private���\�b�h�ɃA�N�Z�X�ł���
	f1.func1();
}

// friend�N���X�̎Q��
void CppTestFriend::test1() {
	CFriend2 f2;

	f2.func1();
}

// friend���\�b�h�̎Q��
void CppTestFriend::test2() {
	CFriend1 f1;

	f1.setName("hoge");

	func2(f1);
}


void CppTestFriend::test3() {
}

