// 1.�p�� �^���r�ɮ�(.txt) ���A�U�u�^��r���v�X�{�����ơC(�Ϥ��j�p�g)
// 2.�p�� �^���r�ɮ�(.txt) ���A�u�^��r��(a~Z)�v�P�u�^��r(apple)�v���Ӽ�

#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

int main() {
	string fileName = "C:/Users/MSI-PC/Desktop/tt.txt";
	ifstream ifs;
	ifs.open(fileName, ios::in);
	if (!ifs.is_open()) {
		cout << "��󥴶}���ѡA���ˬd���|" << endl;
		ifs.close();
		return 0;
	}
	//1.�p�� �^���r�ɮ�(.txt) ���A�U�u�^��r���v�X�{�����ơC(�Ϥ��j�p�g)
	map<char, int> m;
	char buf[1024] = " ";
	while (ifs.read(buf, 1)) {
		if (buf[0] == ' ')continue;

		m[buf[0]]++;
	}
	for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << "�X�{���ơG" << it->second << endl;
	}
	ifs.close();
	cout << "---------------------------------------------------------------------------------------" << endl;

	//2.�p�� �^���r�ɮ�(.txt) ���A�u�^��r��(a~Z)�v�P�u�^��r(apple)�v���Ӽ�
	int count_word = 0, count_sentence = 0;
	ifs.open(fileName, ios::in);
	while (ifs>>buf) {
		if (strlen(buf) > 1) {
			count_sentence++;
		}
		count_word += strlen(buf);
	}
	cout << "�^��r���ӼơG" << count_word << " �^��r�ӼơG" << count_sentence << endl;
	ifs.close();

	return 0;
}