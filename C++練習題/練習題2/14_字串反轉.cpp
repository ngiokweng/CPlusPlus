//14.字串反轉。如：輸入 abcdef，則輸出 fedcba。


#include <iostream>
#include <string>
using namespace std;

int main() {
	string baseStr = "abcdefg";
	string reverseStr = "";
	cout << "原字符串：" << baseStr << endl;

	for (int i = baseStr.length()-1; i >= 0; i--) {
		reverseStr += baseStr[i];
	}
	cout << "反轉後的字符串：" << reverseStr << endl;
	return 0;
}