//14.�r�����C�p�G��J abcdef�A�h��X fedcba�C


#include <iostream>
#include <string>
using namespace std;

int main() {
	string baseStr = "abcdefg";
	string reverseStr = "";
	cout << "��r�Ŧ�G" << baseStr << endl;

	for (int i = baseStr.length()-1; i >= 0; i--) {
		reverseStr += baseStr[i];
	}
	cout << "����᪺�r�Ŧ�G" << reverseStr << endl;
	return 0;
}