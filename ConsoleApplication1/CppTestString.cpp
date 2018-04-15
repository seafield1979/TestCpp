#include "stdafx.h"
#include "CppTest.hpp"

#include<string>
using namespace std;

class CString {
public:
	// コンストラクタ
	CString() {

	}
	// デストラクタ
	~CString() {

	}
};

void CppTestString::test1()
{
	string str;

	str = "hoge";
	printf_s("%s\n", str.c_str());
}

void CppTestString::test2()
{

}

void CppTestString::test3()
{

}
