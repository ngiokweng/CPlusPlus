//19.�H��ƻ��j�覡�p�� X!

#include <iostream>
using namespace std;

int calcFactorial(int x) {
	if (x < 0)return -1;   //�t�Ƥ���p��
	return (x == 0) ? 1 : x * calcFactorial(x - 1);
}

int main() {
	cout << calcFactorial(6) << endl;
	return 0;
}