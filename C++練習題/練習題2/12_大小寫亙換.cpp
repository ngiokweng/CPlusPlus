//12.將輸入字串之英文字母大小寫互換
// a : 0110 0001
// A : 0100 0001

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "";
	cout << "輸入一字符串(範圍：a~Z)：" << endl;
	cin >> str;
	cout << "原字符串：" << str << endl;
	for (int i = 0; i < str.length(); i++) {
		//223(10進制) == 11011111(2進制)
		//32(10進制)   == 00100000(2進制)
		str[i] = str[i] >= 97 ? (str[i] & 223) : (str[i] | 32);
	}
	cout << "大小寫轉換後：" << str << endl;
	return 0;
}