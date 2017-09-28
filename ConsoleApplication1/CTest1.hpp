#pragma once



class CTest1 {

private:
	char c1;
	int i1;


public:
	static int si1;

	CTest1();

	// 引数ありのコンストラクタ
	CTest1(char c1);

	~CTest1();

	void print1();
	void print2();

	static void PrintS() {
		printf_s("CTest1::print2()");
	}
};