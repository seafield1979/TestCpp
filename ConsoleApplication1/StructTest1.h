#pragma once

/*
	�e�X�g�p�̍\����
*/

#define StructBufSize		(32)

// �\���̂̒�`�ƕʖ���`
// StructTest1 -> struct _StructTest1 �Ɠ���
// PStructTest1 -> struct *_StructTest1 �Ɠ���
typedef struct _StructTest1 {
	int a;
	int b;
	char buf[StructBufSize];
}StructTest1, *PStructTest1;

// �֐��̒�`
void printStruct(StructTest1* st1);