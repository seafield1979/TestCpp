/*
	アクセス権

	アクセス権はクラスのメンバ、メソッドをどの範囲から参照、呼び出し可能かを設定する属性

	public:		どこからでもアクセス可能
	private:	自身のクラスからのみアクセス可能
	protected:	自身と派生クラスからのみアクセス可能
*/

#include "stdafx.h"
#include "CppTest.hpp"

class CAccess1 {
private:
	int private1;
	void privateFunc1();

protected:
	int protected1;
	void protectedFunc1();

public :
	int public1;
	void publicFunc1();
};

void CAccess1::privateFunc1() {
	printf_s("CAccess1::privateFunc1() %d\n", private1);
}
void CAccess1::protectedFunc1() {
	printf_s("CAccess1::protectedFunc1() %d\n", protected1);
}
void CAccess1::publicFunc1() {
	printf_s("CAccess1::publicFunc1() %d\n", public1);
}


class CAccess2 : public CAccess1 {
public:
	void test1();
};

// 親クラスのメンバやメソッドを参照してみる
void CAccess2::test1() {
	// public
	public1 = 100;
	publicFunc1();

	// protected
	protected1 = 100;
	protectedFunc1();

	// private
	//private1 = 100;		// エラー
	//privateFunc1();		// エラー
}


// 継承先のクラスから参照
void CppTestAccess::test1() {

	// CAccess1
	// ここからアクセス可能なのは public 属性のみ
	CAccess1 c1;
	c1.public1 = 100;
	c1.publicFunc1();

	//c1.protected1 = 100;   // エラー
	//c1.protectedFunc1();   // エラー

	//c1.private1 = 100;   // エラー
	//c1.privateFunc1();   // エラー
}

// 継承先のクラスからアクセスできるのは publicとprotectedのメンバだけ
void CppTestAccess::test2() {

	CAccess2 c2;
	c2.test1();
}

void CppTestAccess::test3() {
}

