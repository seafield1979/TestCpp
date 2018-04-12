/*
	�p��
	�|�����t�B�Y��
	���z�֐��E�������z�֐��iJava�̉��z�֐��ɋ߂��̂͏������z�֐�)
	�e�N���X�̃��\�b�h���Ăяo��

	�p����̃R���X�g���N�^�̐擪�Őe�N���X�̃R���X�g���N�^���Ă΂��
	�p����̃f�X�g���N�^�̖����Őe�N���X�̃R���X�g���N�^���Ă΂��
*/

#include "stdafx.h"
#include "CppTest.hpp"

// �e�N���X
class CInherit1 {
private:
	char* name;
public:
	// �R���X�g���N�^
	CInherit1() {
		printf_s("CInherit1::Constructor\n");
	}
	// �f�X�g���N�^
	~CInherit1() {
		printf_s("CInherit1::Destructor\n");
	}

	inline void setName(char* _name) {
		name = _name;
	}
	virtual void print() = 0;
	virtual void print2() {
		printf_s("CInherit1::print2()\n");
	}
	void printName();
};

void CInherit1::printName() {
	printf_s("%s\n", name);
}


// �q�N���X1
class CInheritC1 : public CInherit1 {
public:
	// �R���X�g���N�^
	CInheritC1() {
		printf_s("CInheritC1::Constructor\n");
	}
	// �f�X�g���N�^
	~CInheritC1() {
		printf_s("CInheritC1::Destructor\n");
	}

	// ���z�֐����I�[�o�[���C�h
	void print();

	// �e�N���X�̃��\�b�h���Ăяo��
	void print2();
};

void CInheritC1::print(){
	printf_s("CInheritC1::print()\n");
}

void CInheritC1::print2() {
	// Java�� super.print2()�ɑ���
	CInherit1::print2();
	printf_s("CInheritC1::print2()\n");
}

// �q�N���X2
class CInheritC2 : public CInherit1{
public:
	// �R���X�g���N�^
	CInheritC2() {
		printf_s("CInheritC2::Constructor\n");
	}
	// �f�X�g���N�^
	~CInheritC2() {
		printf_s("CInheritC2::Destructor\n");
	}


	// ���z�֐����I�[�o�[���C�h
	void print();
};


void CInheritC2::print(){
	printf_s("CInheritC2::print()\n");
}


// ���N���X
class CInheritGS1 : public CInherit1{	
public:
	// ���z�֐����I�[�o�[���C�h
	void print();
};

void CInheritGS1::print() {
	printf_s("CInheritGS1::print()\n");
}

// �p�������N���X���g�p����
void CppTestInherit::test1() {
	CInheritC1 c1;
	c1.setName("hoge");
	c1.printName();

	CInheritC2 c2;
	c2.setName("hoge2");
	c2.printName();
}

// �|�����t�B�Y��
void CppTestInherit::test2() {
	CInherit1 *p1 = new CInheritC1();
	CInherit1 *p2 = new CInheritC2();
	CInherit1 *p3 = new CInheritGS1();

	// ������ CInherit1�Ɋi�[���ꂽ�I�u�W�F�N�g�̎���(�q�N���X�̃I�u�W�F�N�g)���Ă΂��
	p1->print();
	p2->print();
	p3->print();
}

// �e�N���X�̃��\�b�h�Ăяo��
void CppTestInherit::test3() {
	CInheritC1 c1;

	// CInherit1��print2()�� CInheritC2��print2()���Ă΂��
	c1.print2();
}

