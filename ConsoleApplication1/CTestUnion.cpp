/*
	���p��(Union)

	�����̈�ɕ����̕ϐ������蓖�Ă���B���p�̂��g�p����Ɣz�񉻂����ꍇ�ɁA�v�f�ɂ���Ďg�p����f�[�^���g�������邱�Ƃ��ł���B
*/
#include "stdafx.h"
#include "CTest.hpp"

// �\����
typedef struct _Struct1 {
	int a;
	int b;
}St1;

typedef struct _Struct2 {
	char buf[10];
}St2;

// ���p��
// a, b, buf �͓����A�h���X�ɔz�u�����B���̏ꍇunion�̒��Œ�`���ꂽ��ԃT�C�Y���傫���ϐ���
// ����union�̃T�C�Y�ɂȂ�
typedef union _UnionTest1 {
	int a;
	int b;
	char buf[10];
}UnionTest1;

typedef union _UnionTest2 {
	St1 st1;
	St2 st2;
}UnionTest2;

// Union�̒��ɈقȂ�ϐ���z�u
void CTestUnion::test1() {
	UnionTest1 union1;

	union1.a = 100;
	union1.b = 200;
	union1.buf[0] = 1;
	union1.buf[1] = 2;

	// union�͓����A�h���X�����L����̂� a �̒l�͏㏑������Ă���
	printf_s("%d\n", union1.a);
}

// Union�̒��ɈقȂ�\���̂�z�u
void CTestUnion::test2() {
	UnionTest2 ary[2];

	// �z��̊e�v�f�Ŏg�p����\���̂�ς���
	ary[0].st1.a = 100;
	ary[0].st1.b = 200;

	ary[1].st2.buf[0] = 10;
	ary[1].st2.buf[1] = 20;
	ary[1].st2.buf[2] = 30;
	ary[1].st2.buf[3] = 40;

	printf_s("ary[0] %d %d\n", ary[0].st1.a, ary[0].st1.b);
	printf_s("ary[1] %d %d %d %d\n", ary[1].st2.buf[0], ary[1].st2.buf[1], ary[1].st2.buf[2], ary[1].st2.buf[3]);
}

void CTestUnion::test3() {

}