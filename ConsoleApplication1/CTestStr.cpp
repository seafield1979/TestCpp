/*
	文字列
	結合
	split
	比較
	切り出し

*/

#include "stdafx.h"
#include "CTest.hpp"

// 文字列の基本
void CTestStr::test1() {
	printf_s("CTestStr::test1\n");

	// 文字列の実態はchar型の配列
	// char* str = "hoge";		メモリ上は {'h','o','g','e','\n'}
	// char str2[] = "hoge";

	char* str1 = "hoge";
	char str2[] = "hoge";
	char str3[] = { 'h','o','g','e','\0' };

	printf_s("%s %s %s\n", str1, str2, str3);


}

// 文字列操作関数いろいろ
void CTestStr::test2() {
	printf_s("CTestStr::test2\n");

	// 文字列の比較 strcmp
	char* str1 = "hoge";
	char* str2 = "hoge2";

	if (strcmp(str1, str2) == 0) {
		printf_s("str1 == str2\n");
	}

	// 文字列の長さを取得
	printf_s("strlen %d\n", strlen("hogetarou!"));

	// 文字列をコピー
	char* str21 = "hoge123";
	char* str22 = (char*)malloc(strlen(str21) + 1);
	strcpy(str22, str21);
	printf_s("strcpy %s\n", str22);

	// 文字列コピー (指定サイズ)
	char *str23 = (char*)malloc(6);
	strncpy(str23, str22, 5);
	str23[5] = '\0';
	printf_s("strncpy %s\n", str23);

	// 文字列を連結
	char *str31 = (char*)malloc(100);
	strcpy(str31, "_____");
	strcat(str31, str21);
	printf_s("strcat %s\n", str31);

}


// 文字列関数2
void CTestStr::test3() {
	printf_s("CTestStr::test3\n");

	// 文字検索
	char* str1 = "hello world!!";
	char* p1 = strchr(str1, ' ');
	printf_s("strchr %s\n", p1);

	// 文字列検索
	char* p2 = strstr(str1, "!!");
	printf_s("strstr %s\n", p2);


	// 文字列を指定の区切り文字で分割
	//char* str3 = "hoge 1 2 3";		// strtokに渡す文字列は書き換え可能でなければならないためエラーになる
	char str3[] = "hoge 1 2 3";
	char* str32 = strtok(str3, " ");
	char* str33 = strtok(NULL, " ");
	char* str34 = strtok(NULL, " ");
	char* str35 = strtok(NULL, " ");

	printf_s("%s %s %s %s\n", str32, str33, str34, str35);
}
