//3.產生輸入字元相對應之 ASCII 碼

#include <iostream>
using namespace std;

//我的解法
int main() {
	char c = ' ';
	cout << "隨便輸入任一字元：";
	cin >> c;
	cout <<"該字元對應的ASCII碼為：" << (int)c;
	return 0;
}