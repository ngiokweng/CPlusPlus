//5.�H�j����ܩҦ��j�p�g���^��r���C
/*
a:97
A:65
gap = 97 - 65 = 32
*/

#include <iostream>
using namespace std;

//�ڪ��Ѫk
int main() {
	cout << "�p�g�r���G";
	for (char str = 'a'; str != 'z'+1; str++) {
		cout  << str << "  ";
	}
	cout << endl;
	cout << "�j�g�r���G";
	for (char str = 'A'; str != 'Z' + 1; str++) {
		cout << str << "  ";
	}
	return 0;
}