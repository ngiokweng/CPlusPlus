//18.�H��ƻ��j�覡�p�� X^n

#include <iostream>
using namespace std;

int calcPow(int x, int n) {
	/*
	if (n == 0) return 1;
	return x*calcPow(x, n - 1);
	*/

	//�U���o��N�X == �W�������
	//return (n == 0) ? 1 : x * calcPow(x, n - 1);
}

int main() {
	cout << calcPow(4,3) << endl;
	return 0;
}