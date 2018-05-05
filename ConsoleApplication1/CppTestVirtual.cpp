/*
	仮想クラス
	仮想関数
	純粋仮想関数
*/
#include "stdafx.h"
#include "CppTest.hpp"


class CVirtual {
public:
	CVirtual()
	{

	}

	~CVirtual()
	{

	}

	virtual void Test1() {}
	virtual void Test2() {}
};

// 仮想関数を実装したクラス
class CVirtual2 {
public:
	CVirtual2() {

	}
	~CVirtual2() {

	}
	void Test1() {
		printf_s("CVirtual2.Test1()\n");
	}
};

void CppTestVirtual::test1() {
	CVirtual2 c1;
	
	c1.Test1();
}

void CppTestVirtual::test2() {
}

void CppTestVirtual::test3() {
}

