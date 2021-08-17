//16.將輸入字串轉換為對應之整數輸出。如輸入 1234567abcd，則輸出1234567。若輸入 a12345，則輸出 0。

#include <iostream>
#include <string>
using namespace std;

int stringToInt(string str) {
	if ((int)str[0] > 57 || (int)str[0] < 48) return 0;

	//先將數字部分反轉
	string tmp = "";
	for (int i = str.length() - 1; i >= 0; i--) {
		if ((int)str[i] > 57 || (int)str[i] < 48) continue;
		tmp += str[i];
	}
	//再將string -> int
	int num=0,rate = 1;
	for (int i = 0; i < tmp.length(); i++) {
		num += ((int)tmp[i] - 48) * rate;
		rate *= 10;
	}

	return num;
}

int main() {
	/*
		( char類型 ) '0' == ( int類型 ) 48
		( char類型 ) '9' == ( int類型 ) 57

		(int)'0~9' - 48 = 0~9
	*/

	string str1 = "1234abc";
	cout << stringToInt(str1) << endl;
	return 0;
}