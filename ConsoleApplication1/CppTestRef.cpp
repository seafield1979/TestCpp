/*
	�Q��
	�\���́A�N���X�I�u�W�F�N�g�̎Q�Ɠn��

	�Q�Ɠn�����g�p����ƃ��\�b�h�̒��Œl��ύX�ł���B�܂��l�n���ɔ�ׂ�
	�R�s�[�����Ȃ��������I�[�o�[�w�b�h�����Ȃ��Ă���
*/
#include "stdafx.h"
#include "CppTest.hpp"

class CRef1 {
public:
	// �R���X�g���N�^
	CRef1() {
		sum = 0;
		printf_s("CTest1 constructor\n");
	}

	// �f�X�g���N�^
	~CRef1() {
		printf_s("CTest1 destructor\n");
	}

	void add(int a);
	void sub(int a);

	// Get/Set
	int getSum() {
		return sum;
	}
	void setSum(int a) {
		sum = a;
	}
private:
	int sum;
};

void CRef1::add(int a) {
	sum += a;
}

void CRef1::sub(int a) {
	sum -= a;
}

void printRef(CRef1 &ref) {
	ref.add(1);
	printf_s("%d\n", ref.getSum());
}

// �Q�Ƒ̃e�X�g�P
void CppTestRef::test1() {
	CRef1 ref1;

	printRef(ref1);
	printRef(ref1);
}

void CppTestRef::test2() {

}

void CppTestRef::test3() {
}

