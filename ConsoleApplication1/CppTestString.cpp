#include "stdafx.h"
#include "CppTest.hpp"

#include<string>
#include<vector>


class CString {
public:
	// �R���X�g���N�^
	CString() {

	}
	// �f�X�g���N�^
	~CString() {

	}
};

void CppTestString::test1()
{
	string str;

	str = "hoge";
	printf_s("%s\n", str.c_str());

	//�錾
	string c;

	//���������Ƃ��Ȃ��錾
	string str2("abcdefghijk");

	//char*�ɕϊ�
	print(str2);

}

void CppTestString::test2()
{
	string str1("hello world");

	//�T�C�Y���擾
	printf_s("%d\n", str1.size());

	//�A��
	// str1��str2��A��
	string str2("!!");
	str1 += str2;
	print(str1);

	//��r
	// str1 �� str2 ���r
	if (str1 == str2) {
		printf_s("str1 == str2\n");
	}
	else {
		printf_s("str1 != str2\n");
	}

	// ����
	string str3("abcdefghijk");
	print(str3.substr(5));    // "fghijk"
	print(str3.substr(5, 3)); // "fgh"

	//�����̎��o��
	//str[���o�����������̔ԍ�] ���g��
	//str��1�����ڎ��o��
	char c = str1[1];
	printf_s("%c\n", c);

	//�}��
	//insert���g���B�J�n�ʒu���w�肷��B
	//�擪�ɑ}��
	string str("abcdefghijk");
	print(str.insert(0, "123")); // 123abcdefghijk
							  //3�����ڂɑ}��
	str = "abcdefghijk";
	str.insert(3, "123"); // abc123defghijk
	print(str);

	//�폜
	//erase���g���B
	//�C���f�b�N�X�������w�肵���ꍇ�ɂ͂�������Ō�̕����܂ł��폜�����B
	str = "1234567890";
	str.erase(3);
	print(str);
	
	//�w�肵���ꏊ����w�肵�����������폜����ɂ́Aerase(�C���f�b�N�X, ������)�ŌĂԁB
	str = "1234567890";
	str.erase(3, 3);    // "abcghijk"
	print(str);

	//1�������폜���邽�߂ɂ́A�C�e���[�^�̐擪����̕�������w�肷��B
	str = "1234567890";
	str.erase(str.begin() + 3);    // "abcefghijk"
	print(str);
}

void CppTestString::test3()
{
	// ����
	// find�𗘗p����B���������ŋ��߂镶��������ƁA���̕����ʒu��Ԃ��B
	string str("abcdefghijk");
	char key = 'h';
	printf_s("%d\n", str.find(key));

	//�����Ɏ��s����ƁAstring::npos �Ƃ����l���Ԃ����B(-1)
	str = "abcdefghijk";
	key = 'z';

	if (str.find(key) == string::npos) {
		printf_s("%c is not found\n", key);
	}

	// �����z��
	// ������z�񂪗^����ꂽ���́A(i, j)�v�f�ւ̃A�N�Z�X�͈ȉ�
	// str[i][j];
	// ������z�񂪗^����ꂽ�ꍇ�̕\�̃T�C�Y�̋��ߕ�
	vector<string> table = { "ABC",	"DEF", "GHI", "JKL" };

	int width = table.size();
	int height = table[0].length();
	printf_s("width:%d height:%d\n", width, height);
}

void CppTestString::print(string &str)
{
	printf_s("%s\n", str.c_str());
}