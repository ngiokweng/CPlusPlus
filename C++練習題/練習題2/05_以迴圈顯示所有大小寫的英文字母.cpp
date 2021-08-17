//5.以迴圈顯示所有大小寫的英文字母。
/*
a:97
A:65
gap = 97 - 65 = 32
*/

#include <iostream>
using namespace std;

//我的解法
int main() {
	cout << "小寫字母：";
	for (char str = 'a'; str != 'z'+1; str++) {
		cout  << str << "  ";
	}
	cout << endl;
	cout << "大寫字母：";
	for (char str = 'A'; str != 'Z' + 1; str++) {
		cout << str << "  ";
	}
	return 0;
}