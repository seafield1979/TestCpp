/*
	���w�֐��̃e�X�g
*/

#include "stdafx.h"
#include "CTest.hpp"
#include <math.h>

#define RAD   (3.1415 / 180)

// ���낢��Ȑ��w
void CTestMath::test1() {
	
	// sqrt �����������߂�
	printf_s("%f %f\n", sqrt(10), sqrt(100));

	// pow �ׂ���
	printf_s("%f %f\n", pow(10, 2), pow(10, 3));
}

// sin, cos, tan
void CTestMath::test2() {
	// sin
	for (int i = 0; i < 360; i += 10) {
		printf("sin%d %f\n", i, sin(i * RAD));
	}
}

// cos�e�[�u����\��
void CTestMath::test3() {
	// cos
	for (int i = 0; i < 360; i += 10) {
		printf("cos%d %f\n", i, cos(i * RAD));
	}
}

// tan�e�[�u����\��
void CTestMath::test4() {
	// tan
	for (int i = 0; i < 360; i += 10) {
		printf("tan%d %f\n", i, tan(i * RAD));
	}
}