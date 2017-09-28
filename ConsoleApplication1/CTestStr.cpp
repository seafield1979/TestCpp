/*
	������
	����
	split
	��r
	�؂�o��

*/

#include "stdafx.h"
#include "CTest.hpp"

// ������̊�{
void CTestStr::test1() {
	printf_s("CTestStr::test1\n");

	// ������̎��Ԃ�char�^�̔z��
	// char* str = "hoge";		��������� {'h','o','g','e','\n'}
	// char str2[] = "hoge";

	char* str1 = "hoge";
	char str2[] = "hoge";
	char str3[] = { 'h','o','g','e','\0' };

	printf_s("%s %s %s\n", str1, str2, str3);


}

// �����񑀍�֐����낢��
void CTestStr::test2() {
	printf_s("CTestStr::test2\n");

	// ������̔�r strcmp
	char* str1 = "hoge";
	char* str2 = "hoge2";

	if (strcmp(str1, str2) == 0) {
		printf_s("str1 == str2\n");
	}

	// ������̒������擾
	printf_s("strlen %d\n", strlen("hogetarou!"));

	// ��������R�s�[
	char* str21 = "hoge123";
	char* str22 = (char*)malloc(strlen(str21) + 1);
	strcpy(str22, str21);
	printf_s("strcpy %s\n", str22);

	// ������R�s�[ (�w��T�C�Y)
	char *str23 = (char*)malloc(6);
	strncpy(str23, str22, 5);
	str23[5] = '\0';
	printf_s("strncpy %s\n", str23);

	// �������A��
	char *str31 = (char*)malloc(100);
	strcpy(str31, "_____");
	strcat(str31, str21);
	printf_s("strcat %s\n", str31);

}


// ������֐�2
void CTestStr::test3() {
	printf_s("CTestStr::test3\n");

	// ��������
	char* str1 = "hello world!!";
	char* p1 = strchr(str1, ' ');
	printf_s("strchr %s\n", p1);

	// �����񌟍�
	char* p2 = strstr(str1, "!!");
	printf_s("strstr %s\n", p2);


	// ��������w��̋�؂蕶���ŕ���
	//char* str3 = "hoge 1 2 3";		// strtok�ɓn��������͏��������\�łȂ���΂Ȃ�Ȃ����߃G���[�ɂȂ�
	char str3[] = "hoge 1 2 3";
	char* str32 = strtok(str3, " ");
	char* str33 = strtok(NULL, " ");
	char* str34 = strtok(NULL, " ");
	char* str35 = strtok(NULL, " ");

	printf_s("%s %s %s %s\n", str32, str33, str34, str35);
}
