//7.印出費氏數列，(1, 1, 2, 3, 5, 8, 13, ...)。

#include <iostream>
#include <time.h>
using namespace std;

/////////////////////////////////////////  解法1  /////////////////////////////////////////
int main() {
	
	int arr[20] = { 0 };
	arr[1] = 1;
	//計算
	for (int i = 0; i < 20; i++) {
		if (i >= 2) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		cout << arr[i] << "  ";
	}
	return 0;
}

///////////////////////////////////////////  解法2  /////////////////////////////////////////
//int func(int num) {
//	return (num == 1 || num == 2) ? 1 : func(num - 2) + func(num - 1);
//}
//
//int main() {
//	for (int i = 1; i < 20; i++) {
//		cout << func(i) << " ";
//	}
//	return 0;
//}
