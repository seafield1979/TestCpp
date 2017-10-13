/*
	friend
	friendクラス
		friendで自分のクラスのprivateメンバ、メソッドにアクセスできるクラスを許可する

	friendメソッド
		static メソッドにprivateメンバ、メソッドできる権限を付与する
		１つのクラスで完結する。
*/
#include "stdafx.h"
#include "CppTest.hpp"

class CFriend1;
class CFriend2;

// １つめのクラス
class CFriend1 {
	// friendで自身のクラスのprivateにアクセスを許可するクラスを指定する
	// ここでは CFriend2を指定しているため CFriedn2のメソッドから CFriend1のprivateメソッド、メンバにアクセスできる
	friend class CFriend2;

public:
	void setName(char* name);
private:
	char *name;
	void func1();
public:
	friend void func2(CFriend1 &f1);
};

void CFriend1::setName(char* name) {
	this->name = name;
}

void CFriend1::func1() {
	printf_s("CFriend1::func1()\n");
}

void func2(CFriend1 &f1) {
	printf_s("CFriend1::func2() %s \n", f1.name);
}

// ２つめのクラス
class CFriend2 {

public:
	void func1();
};

void CFriend2::func1() {
	printf_s("CFriend2::func1()\n");

	CFriend1 f1;

	// CFriend1で CFriend2をfriend許可しているのでprivateメソッドにアクセスできる
	f1.func1();
}

// friendクラスの参照
void CppTestFriend::test1() {
	CFriend2 f2;

	f2.func1();
}

// friendメソッドの参照
void CppTestFriend::test2() {
	CFriend1 f1;

	f1.setName("hoge");

	func2(f1);
}


void CppTestFriend::test3() {
}

