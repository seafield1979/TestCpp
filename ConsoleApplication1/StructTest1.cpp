/*
	�\���̂̃e�X�g�p
*/
#include "stdafx.h"

// �\���̂̓��e��\������
void printStruct(StructTest1* st1) {
	printf_s("StructTest1.a %d\n", st1->a);
	printf_s("StructTest1.b %d\n", st1->b);

	if (st1->buf[0] != '\0') {
		printf_s("StructTest1.buf %s\n", st1->buf);
	}
}