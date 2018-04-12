/*
	継承
	ポリモフィズム
	仮想関数・純粋仮想関数（Javaの仮想関数に近いのは純粋仮想関数)
	親クラスのメソッドを呼び出し

	継承先のコンストラクタの先頭で親クラスのコンストラクタが呼ばれる
	継承先のデストラクタの末尾で親クラスのコンストラクタが呼ばれる
*/

#include "stdafx.h"
#include "CppTest.hpp"

// 親クラス
class CInherit1 {
private:
	char* name;
public:
	// コンストラクタ
	CInherit1() {
		printf_s("CInherit1::Constructor\n");
	}
	// デストラクタ
	~CInherit1() {
		printf_s("CInherit1::Destructor\n");
	}

	inline void setName(char* _name) {
		name = _name;
	}
	virtual void print() = 0;
	virtual void print2() {
		printf_s("CInherit1::print2()\n");
	}
	void printName();
};

void CInherit1::printName() {
	printf_s("%s\n", name);
}


// 子クラス1
class CInheritC1 : public CInherit1 {
public:
	// コンストラクタ
	CInheritC1() {
		printf_s("CInheritC1::Constructor\n");
	}
	// デストラクタ
	~CInheritC1() {
		printf_s("CInheritC1::Destructor\n");
	}

	// 仮想関数をオーバーライド
	void print();

	// 親クラスのメソッドを呼び出す
	void print2();
};

void CInheritC1::print(){
	printf_s("CInheritC1::print()\n");
}

void CInheritC1::print2() {
	// Javaの super.print2()に相当
	CInherit1::print2();
	printf_s("CInheritC1::print2()\n");
}

// 子クラス2
class CInheritC2 : public CInherit1{
public:
	// コンストラクタ
	CInheritC2() {
		printf_s("CInheritC2::Constructor\n");
	}
	// デストラクタ
	~CInheritC2() {
		printf_s("CInheritC2::Destructor\n");
	}


	// 仮想関数をオーバーライド
	void print();
};


void CInheritC2::print(){
	printf_s("CInheritC2::print()\n");
}


// 孫クラス
class CInheritGS1 : public CInherit1{	
public:
	// 仮想関数をオーバーライド
	void print();
};

void CInheritGS1::print() {
	printf_s("CInheritGS1::print()\n");
}

// 継承したクラスを使用する
void CppTestInherit::test1() {
	CInheritC1 c1;
	c1.setName("hoge");
	c1.printName();

	CInheritC2 c2;
	c2.setName("hoge2");
	c2.printName();
}

// ポリモフィズム
void CppTestInherit::test2() {
	CInherit1 *p1 = new CInheritC1();
	CInherit1 *p2 = new CInheritC2();
	CInherit1 *p3 = new CInheritGS1();

	// ここで CInherit1に格納されたオブジェクトの実態(子クラスのオブジェクト)が呼ばれる
	p1->print();
	p2->print();
	p3->print();
}

// 親クラスのメソッド呼び出し
void CppTestInherit::test3() {
	CInheritC1 c1;

	// CInherit1のprint2()と CInheritC2のprint2()が呼ばれる
	c1.print2();
}

