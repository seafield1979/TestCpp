#include "stdafx.h"
#include "CppTest.hpp"


class CInline1 {
private:
	int sum;
public:
	CInline1() {
		sum = 0;
	}

	// inline���w�肵�Ė����I�ɃC�����C����
	inline void add(int a) {
		sum += a;
	}
	// inline�����Ȃ��Ă����\�b�h���`����������ƃC�����C���������
	void sub(int a) {
		sum -= a;
	}

	inline void print() {
		printf_s("%d\n", sum);
	}
};

void CppTestInline::test1() {
	CInline1 c1;
	c1.add(100);
	c1.sub(10);
	c1.print();
}

void CppTestInline::test2() {
}

void CppTestInline::test3() {
}
