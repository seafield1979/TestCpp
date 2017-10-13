#include "stdafx.h"
#include "CppTest.hpp"

/*
	クラスの基本機能
	クラスの定義
	オブジェクトの生成、破棄
	メソッドの呼び出し
	メンバーの参照
*/

class CBase1 {
public:
	// コンストラクタ
	CBase1() {
		sum = 0;
		printf_s("CTest1 constructor\n");
	}

	// デストラクタ
	~CBase1() {
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

void CBase1::add(int a) {
	sum += a;
}

void CBase1::sub(int a) {
	sum -= a;
}


// オブジェクトの生成
void CppTestBase1::test1() {
	CBase1 c1;
	c1.add(100);
	c1.add(200);
	c1.sub(10);

	printf_s("%d\n", c1.getSum());
}

// new/delete
void CppTestBase1::test2() {
	CBase1 *p1 = new CBase1();

	p1->add(100);

	printf_s("%d\n", p1->getSum());

	delete p1;
}

void CppTestBase1::test3() {

}
