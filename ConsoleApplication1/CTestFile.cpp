/*
	ファイル操作
	ファイルの作成、削除
	ファイルへの追記
	文字列の書き込み、読み込み
	バイナリデータの書き込み、読み込み
	ファイル一覧表示

	fopenの読み込みモード
	"r"	読み込みようとしてファイルを開きます
	ファイルが見つからなかった場合はNULL(エラー）を返します
	"w"	書き込みモードでファイルを開きます
	ファイルがない場合は新しく作成し、存在している場合はその内容を破壊します
	"a"	追加モードでファイルを開きます
	ファイルがない場合は作成します
	"r+"	既存ファイルを対象に、読み込み/書き込みの両方のモードで開きます
	ファイルがない場合はエラーを返します
	"w+"	ファイルを作成し、読み込み/書き込みの両方のモードで開きます
	ファイルが存在している場合はその内容を破壊します
	"a+"	読み込み/書き込みモードの両方のモードで開きます
	ファイルが存在する場合は追加、ない場合は作成します
*/

#include "stdafx.h"
#include "CTest.hpp"

// ファイルの作成
void CTestFile::test1() {
	printf_s("CTestFile::test1\n");

	FILE *fp;
	fp = fopen(mFileName, "w");
	if (fp == NULL) {
		printf_s("failed to open file\n");
		return;
	}

	// ファイルに文字列を書き込む
	fputs("hoge\n", fp);

	printf_s("write text to file\n");

	// ファイルを閉じる
	fclose(fp);
}

// ファイルを読み込む
void CTestFile::test2() {
	printf_s("CTestFile::test2\n");

	FILE* fp;
	fp = fopen(mFileName, "r");
	if (fp == NULL) {
		printf_s("failed to open file\n");
		return;
	}

	char buf[256];
	fgets(buf, 256 - 1, fp);
	printf_s("%s\n", buf);

	fclose(fp);
}

// ファイルに追加書き込み
void CTestFile::test3() {
	printf_s("CTestFile::test3\n");

	FILE *fp;
	fp = fopen(mFileName, "a");
	if (fp == NULL) {
		printf_s("failed to open file\n");
		return;
	}

	// ファイルに文字列を書き込む
	fputs("hoge2\n", fp);

	printf_s("write text to file\n");

	// ファイルを閉じる
	fclose(fp);
}

// バイナリデータの書き込み
void CTestFile::test4() {
	printf_s("CTestFile::test4\n");

	FILE *fp = fopen(mFileName2, "wb");

	if (fp == NULL) {
		printf_s("failed to file\n");
		return;
	}

	for (int i = 0; i < 10; i++) {
		fwrite(&i, sizeof(int), 1, fp);
	}
	fclose(fp);

}

// バイナリデータの読み込み
void CTestFile::test5() {
	printf_s("CTestFile::test5\n");

	FILE *fp = fopen(mFileName2, "rb");

	if (fp == NULL) {
		printf_s("failed to file\n");
		return;
	}

	int i = 0;
	for (int i = 0; i < 10; i++) {
		fread(&i, sizeof(int), 1, fp);
		printf_s("%d\n", i);
	}
	fclose(fp);
}
