//15.文字順序反轉。如輸入 see you later，則輸出 later you see。

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "see you later";
	string str2 = "";

	for (int i = str1.length() - 1; i >= 0; i--) {
		if (str1[i] == ' ') {
			for (int j = i + 1; str1[j] != 0 && str1[j] != ' '; j++) {
				str2 += str1[j];
			}
			str2 += ' ';
		}
		if (i == 0) {
			for (int j = i; str1[j] != ' '; j++) {
				str2 += str1[j];
			}
			str2 += ' ';
		}
	}
	cout << str2 << endl;
	return 0;
}