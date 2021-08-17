// 1.計算 英文文字檔案(.txt) 中，各「英文字母」出現的次數。(區分大小寫)
// 2.計算 英文文字檔案(.txt) 中，「英文字母(a~Z)」與「英文字(apple)」的個數

#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

int main() {
	string fileName = "C:/Users/MSI-PC/Desktop/tt.txt";
	ifstream ifs;
	ifs.open(fileName, ios::in);
	if (!ifs.is_open()) {
		cout << "文件打開失敗，請檢查路徑" << endl;
		ifs.close();
		return 0;
	}
	//1.計算 英文文字檔案(.txt) 中，各「英文字母」出現的次數。(區分大小寫)
	map<char, int> m;
	char buf[1024] = " ";
	while (ifs.read(buf, 1)) {
		if (buf[0] == ' ')continue;

		m[buf[0]]++;
	}
	for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << "出現次數：" << it->second << endl;
	}
	ifs.close();
	cout << "---------------------------------------------------------------------------------------" << endl;

	//2.計算 英文文字檔案(.txt) 中，「英文字母(a~Z)」與「英文字(apple)」的個數
	int count_word = 0, count_sentence = 0;
	ifs.open(fileName, ios::in);
	while (ifs>>buf) {
		if (strlen(buf) > 1) {
			count_sentence++;
		}
		count_word += strlen(buf);
	}
	cout << "英文字母個數：" << count_word << " 英文字個數：" << count_sentence << endl;
	ifs.close();

	return 0;
}