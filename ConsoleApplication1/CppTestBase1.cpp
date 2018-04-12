#include "stdafx.h"
#include "CppTest.hpp"

/*
	クラスの基本機能
	クラスの定義
	オブジェクトの生成、破棄
	メソッドの呼び出し
	メンバーの参照
	コピーコンストラクタ
	デフォルト引数
*/

class CBase1 {
public:
	// コンストラクタ
	CBase1() {
		sum = 0;
		name = NULL;
		printf_s("CTest1 constructor\n");
	}

	// 引数付きコンストラクタ
	CBase1(char *_name) {
		name = _name;
	}

	// デストラクタ
	~CBase1() {
		printf_s("CTest1 destructor\n");
	}

	// コピーコンストラクタ
	CBase1(const CBase1 &obj) {
		sum = obj.sum;
		if (obj.name != NULL) {
			int len = strlen(obj.name) + 1;
			name = new char[len];
			strcpy(name, obj.name);
		}
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
	void setName(char* _name) {
		name = _name;
	}
	char* getName() {
		return name;
	}
	void print();
private:
	int sum;
	char *name;
};

void CBase1::add(int a) {
	sum += a;
}

void CBase1::sub(int a) {
	sum -= a;
}

void CBase1::print() {
	printf_s("%d %s\n", sum, name);
}


class CBase2 {
public:
	// デフォルト引数
	void print(char *str);
	void print2(char *str, char *str2);
};

void CBase2::print(char *str = "hoge") {
	printf_s("%s\n", str);
}

void CBase2::print2(char *str, char *str2 = "hoge2") {
	printf_s("%s %s\n", str, str2);
}




// オブジェクトの生成
void CppTestBase1::test1() {
	P1("--1--");
	CBase1 c1;
	c1.add(100);
	c1.add(200);
	c1.sub(10);

	printf_s("%d\n", c1.getSum());

	P1("--2--");
	CBase1 *p1 = new CBase1();
	p1->add(10);
	p1->add(20);
	p1->sub(1);

	printf_s("%d\n", p1->getSum());

	P1("--3--");
	CBase1 *p2 = &c1;
	printf_s("%d\n", p2->getSum());

	P1("--4--");
	// 引数付きコンストラクタ
	CBase1 c2("taro");
	c2.print();
}

// new/delete
void CppTestBase1::test2() {
	CBase1 *p1 = new CBase1();

	p1->add(100);

	printf_s("%d\n", p1->getSum());

	delete p1;
}

// コピーコンストラクタ
void CppTestBase1::test3() {
	CBase1 c1;
	c1.setName("hoge");

	CBase1 c2 = c1;
	c1.setName("hoge2");

	// c1を元にc2を生成したが、メンバーのnameは個別に確保しているので別々の値になる
	c1.print();
	c2.print();
}

// 引数のデフォルト値
void CppTestBase1::test4() {
	CBase2 c1;

	c1.print();
	c1.print("lucky");
	c1.print2("hoge");
	c1.print2("hoge", "hogehoge");
}
