//19.以函數遞迴方式計算 X!

#include <iostream>
using namespace std;

int calcFactorial(int x) {
	if (x < 0)return -1;   //負數不能計算
	return (x == 1) ? 1 : x * calcFactorial(x - 1);
}

int main() {
	cout << calcFactorial(6) << endl;
	return 0;
}
