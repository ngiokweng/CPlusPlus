//16.�N��J�r���ഫ����������ƿ�X�C�p��J 1234567abcd�A�h��X1234567�C�Y��J a12345�A�h��X 0�C

#include <iostream>
#include <string>
using namespace std;

int stringToInt(string str) {
	if ((int)str[0] > 57 || (int)str[0] < 48) return 0;

	//���N�Ʀr��������
	string tmp = "";
	for (int i = str.length() - 1; i >= 0; i--) {
		if ((int)str[i] > 57 || (int)str[i] < 48) continue;
		tmp += str[i];
	}
	//�A�Nstring -> int
	int num=0,rate = 1;
	for (int i = 0; i < tmp.length(); i++) {
		num += ((int)tmp[i] - 48) * rate;
		rate *= 10;
	}

	return num;
}

int main() {
	/*
		( char���� ) '0' == ( int���� ) 48
		( char���� ) '9' == ( int���� ) 57

		(int)'0~9' - 48 = 0~9
	*/

	string str1 = "1234abc";
	cout << stringToInt(str1) << endl;
	return 0;
}