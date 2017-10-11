/*
	�t�@�C������
	�t�@�C���̍쐬�A�폜
	�t�@�C���ւ̒ǋL
	������̏������݁A�ǂݍ���
	�o�C�i���f�[�^�̏������݁A�ǂݍ���
	�t�@�C���ꗗ�\��

	fopen�̓ǂݍ��݃��[�h
	"r"	�ǂݍ��݂悤�Ƃ��ăt�@�C�����J���܂�
	�t�@�C����������Ȃ������ꍇ��NULL(�G���[�j��Ԃ��܂�
	"w"	�������݃��[�h�Ńt�@�C�����J���܂�
	�t�@�C�����Ȃ��ꍇ�͐V�����쐬���A���݂��Ă���ꍇ�͂��̓��e��j�󂵂܂�
	"a"	�ǉ����[�h�Ńt�@�C�����J���܂�
	�t�@�C�����Ȃ��ꍇ�͍쐬���܂�
	"r+"	�����t�@�C����ΏۂɁA�ǂݍ���/�������݂̗����̃��[�h�ŊJ���܂�
	�t�@�C�����Ȃ��ꍇ�̓G���[��Ԃ��܂�
	"w+"	�t�@�C�����쐬���A�ǂݍ���/�������݂̗����̃��[�h�ŊJ���܂�
	�t�@�C�������݂��Ă���ꍇ�͂��̓��e��j�󂵂܂�
	"a+"	�ǂݍ���/�������݃��[�h�̗����̃��[�h�ŊJ���܂�
	�t�@�C�������݂���ꍇ�͒ǉ��A�Ȃ��ꍇ�͍쐬���܂�
*/

#include "stdafx.h"
#include "CTest.hpp"

// �t�@�C���̍쐬
void CTestFile::test1() {
	printf_s("CTestFile::test1\n");

	FILE *fp;
	fp = fopen(mFileName, "w");
	if (fp == NULL) {
		printf_s("failed to open file\n");
		return;
	}

	// �t�@�C���ɕ��������������
	fputs("hoge\n", fp);

	printf_s("write text to file\n");

	// �t�@�C�������
	fclose(fp);
}

// �t�@�C����ǂݍ���
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

// �t�@�C���ɒǉ���������
void CTestFile::test3() {
	printf_s("CTestFile::test3\n");

	FILE *fp;
	fp = fopen(mFileName, "a");
	if (fp == NULL) {
		printf_s("failed to open file\n");
		return;
	}

	// �t�@�C���ɕ��������������
	fputs("hoge2\n", fp);

	printf_s("write text to file\n");

	// �t�@�C�������
	fclose(fp);
}

// �o�C�i���f�[�^�̏�������
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

// �o�C�i���f�[�^�̓ǂݍ���
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
