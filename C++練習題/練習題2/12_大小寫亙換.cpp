//12.�N��J�r�ꤧ�^��r���j�p�g����
// a : 0110 0001
// A : 0100 0001

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "";
	cout << "��J�@�r�Ŧ�(�d��Ga~Z)�G" << endl;
	cin >> str;
	cout << "��r�Ŧ�G" << str << endl;
	for (int i = 0; i < str.length(); i++) {
		//223(10�i��) == 11011111(2�i��)
		//32(10�i��)   == 00100000(2�i��)
		str[i] = str[i] >= 97 ? (str[i] & 223) : (str[i] | 32);
	}
	cout << "�j�p�g�ഫ��G" << str << endl;
	return 0;
}