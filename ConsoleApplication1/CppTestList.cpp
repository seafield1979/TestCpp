#include "stdafx.h"
#include "CppTest.hpp"


#include <list>				 // ヘッダファイルインクルード
using namespace std;         //  名前空間指定

class CLog
{
public:
	int a;
	int b;
	char c[10];

	CLog(int val) {
		a = val;
		b = val;
		for (int i = 0; i < 10; i++) {
			c[i] = val & 0xff;
		}
	}

	~CLog() {

	}
};

void CppTestList::test1()
{
	list<int> lst;			// ローカル変数として、lst を生成
	list<CLog*> lst2;

	for (int i = 0; i < 10; i++) {
		lst.push_front(i);
	}
	
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		printf_s("%d\n", *itr);
	}

	for (int i = 0; i < 10; i++) {
		CLog *log = new CLog(i+1);
		lst2.push_front(log);
	}
	for (auto itr = lst2.begin(); itr != lst2.end(); ++itr) {
		printf_s("%d\n", *itr);
	}
}

void CppTestList::test2()
{
}

void CppTestList::test3()
{
}