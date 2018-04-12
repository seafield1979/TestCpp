/*
	参照
	構造体、クラスオブジェクトの参照渡し

	参照渡しを使用するとメソッドの中で値を変更できる。また値渡しに比べて
	コピーを作らない分だけオーバーヘッドが少なくてすむ
*/
#include "stdafx.h"
#include "CppTest.hpp"

class CRef1 {
public:
	// コンストラクタ
	CRef1() {
		sum = 0;
		printf_s("CTest1 constructor\n");
	}

	// デストラクタ
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

// 参照体テスト１
void CppTestRef::test1() {
	CRef1 ref1;

	printRef(ref1);
	printRef(ref1);
}

void CppTestRef::test2() {

}

void CppTestRef::test3() {
}

