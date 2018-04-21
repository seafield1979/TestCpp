#include "stdafx.h"
#include "CppTest.hpp"

#include<string>
#include<vector>


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

	//宣言
	string c;

	//初期化をともなう宣言
	string str2("abcdefghijk");

	//char*に変換
	print(str2);

}

void CppTestString::test2()
{
	string str1("hello world");

	//サイズを取得
	printf_s("%d\n", str1.size());

	//連結
	// str1にstr2を連結
	string str2("!!");
	str1 += str2;
	print(str1);

	//比較
	// str1 と str2 を比較
	if (str1 == str2) {
		printf_s("str1 == str2\n");
	}
	else {
		printf_s("str1 != str2\n");
	}

	// 分割
	string str3("abcdefghijk");
	print(str3.substr(5));    // "fghijk"
	print(str3.substr(5, 3)); // "fgh"

	//文字の取り出し
	//str[取り出したい文字の番号] を使う
	//strの1文字目取り出し
	char c = str1[1];
	printf_s("%c\n", c);

	//挿入
	//insertを使う。開始位置を指定する。
	//先頭に挿入
	string str("abcdefghijk");
	print(str.insert(0, "123")); // 123abcdefghijk
							  //3文字目に挿入
	str = "abcdefghijk";
	str.insert(3, "123"); // abc123defghijk
	print(str);

	//削除
	//eraseを使う。
	//インデックスだけを指定した場合にはそこから最後の文字までが削除される。
	str = "1234567890";
	str.erase(3);
	print(str);
	
	//指定した場所から指定した文字数を削除するには、erase(インデックス, 文字数)で呼ぶ。
	str = "1234567890";
	str.erase(3, 3);    // "abcghijk"
	print(str);

	//1文字を削除するためには、イテレータの先頭からの文字列を指定する。
	str = "1234567890";
	str.erase(str.begin() + 3);    // "abcefghijk"
	print(str);
}

void CppTestString::test3()
{
	// 検索
	// findを利用する。もし検索で求める文字があると、その文字位置を返す。
	string str("abcdefghijk");
	char key = 'h';
	printf_s("%d\n", str.find(key));

	//検索に失敗すると、string::npos という値が返される。(-1)
	str = "abcdefghijk";
	key = 'z';

	if (str.find(key) == string::npos) {
		printf_s("%c is not found\n", key);
	}

	// 文字配列
	// 文字列配列が与えられた時の、(i, j)要素へのアクセスは以下
	// str[i][j];
	// 文字列配列が与えられた場合の表のサイズの求め方
	vector<string> table = { "ABC",	"DEF", "GHI", "JKL" };

	int width = table.size();
	int height = table[0].length();
	printf_s("width:%d height:%d\n", width, height);
}

void CppTestString::print(string &str)
{
	printf_s("%s\n", str.c_str());
}