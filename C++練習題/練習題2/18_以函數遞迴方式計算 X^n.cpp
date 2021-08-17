//18.以函數遞迴方式計算 X^n

#include <iostream>
using namespace std;

int calcPow(int x, int n) {
	/*
	if (n == 0) return 1;
	return x*calcPow(x, n - 1);
	*/

	//下面這行代碼 == 上面那兩行
	//return (n == 0) ? 1 : x * calcPow(x, n - 1);
}

int main() {
	cout << calcPow(4,3) << endl;
	return 0;
}