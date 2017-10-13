/*
	�A�N�Z�X��

	�A�N�Z�X���̓N���X�̃����o�A���\�b�h���ǂ͈̔͂���Q�ƁA�Ăяo���\����ݒ肷�鑮��

	public:		�ǂ�����ł��A�N�Z�X�\
	private:	���g�̃N���X����̂݃A�N�Z�X�\
	protected:	���g�Ɣh���N���X����̂݃A�N�Z�X�\
*/

#include "stdafx.h"
#include "CppTest.hpp"

class CAccess1 {
private:
	int private1;
	void privateFunc1();

protected:
	int protected1;
	void protectedFunc1();

public :
	int public1;
	void publicFunc1();
};

void CAccess1::privateFunc1() {
	printf_s("CAccess1::privateFunc1() %d\n", private1);
}
void CAccess1::protectedFunc1() {
	printf_s("CAccess1::protectedFunc1() %d\n", protected1);
}
void CAccess1::publicFunc1() {
	printf_s("CAccess1::publicFunc1() %d\n", public1);
}


class CAccess2 : public CAccess1 {
public:
	void test1();
};

// �e�N���X�̃����o�⃁�\�b�h���Q�Ƃ��Ă݂�
void CAccess2::test1() {
	// public
	public1 = 100;
	publicFunc1();

	// protected
	protected1 = 100;
	protectedFunc1();

	// private
	//private1 = 100;		// �G���[
	//privateFunc1();		// �G���[
}


// �p����̃N���X����Q��
void CppTestAccess::test1() {

	// CAccess1
	// ��������A�N�Z�X�\�Ȃ̂� public �����̂�
	CAccess1 c1;
	c1.public1 = 100;
	c1.publicFunc1();

	//c1.protected1 = 100;   // �G���[
	//c1.protectedFunc1();   // �G���[

	//c1.private1 = 100;   // �G���[
	//c1.privateFunc1();   // �G���[
}

// �p����̃N���X����A�N�Z�X�ł���̂� public��protected�̃����o����
void CppTestAccess::test2() {

	CAccess2 c2;
	c2.test1();
}

void CppTestAccess::test3() {
}

