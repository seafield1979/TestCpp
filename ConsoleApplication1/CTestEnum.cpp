/*
	�񋓑� enum 
*/

#include "stdafx.h"
#include "CTest.hpp"

// ������enum
// enum�Œ�`�����l�̎��Ԃ͐����l
void CTestEnum::test1() {
	printf_s("CTestEnum::test1\n");

	enum {
		e1 = 0,
		e2,
		e3
	};
	printf_s("%d %d %d\n", e1, e2, e3);
}

// �l��ݒ肵��enum
void CTestEnum::test2() {
	printf_s("CTestEnum::test2\n");

	enum {
		e1 = 100,
		e2 = 200,
		e3 = 300
	};
	printf_s("%d %d %d\n", e1, e2, e3);
}

// typedef�ŕϐ��̌^���Ƃ��Ďg�p�ł���悤�ɂ���
typedef enum
{
	EM1 = 0,
	EM2,
	EM3
}E_MODE;


// �֐��̈����Ƃ��ĕʖ���`���ꂽenum���g�p����
void printMode(E_MODE mode) {
	printf_s("mode = %d\n", mode);
}

void CTestEnum::test3() {
	printf_s("CTestEnum::test3\n");

	printMode(EM2);
}
