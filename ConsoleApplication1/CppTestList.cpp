#include "stdafx.h"
#include "CppTest.hpp"


#include <list>				 // �w�b�_�t�@�C���C���N���[�h
using namespace std;         //  ���O��Ԏw��

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
	list<int> lst;			// ���[�J���ϐ��Ƃ��āAlst �𐶐�
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