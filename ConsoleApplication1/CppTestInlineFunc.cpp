#include "stdafx.h"
#include "CppTest.hpp"


class CInline1 {
private:
	int sum;
public:
	CInline1() {
		sum = 0;
	}

	// inlineを指定して明示的にインライン化
	inline void add(int a) {
		sum += a;
	}
	// inlineをつけなくてもメソッドを定義を実装するとインライン化される
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
