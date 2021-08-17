//11.以字元方式讀取鍵盤輸入至讀取「#」字元為止，計算所讀取之各字元的出現次數。

#include <iostream>
#include <map>
using namespace std;

int main() {
	char c = ' ';
	map<char, int> m;
	cout << "隨便輸入任意字元，輸入\"#\"代表結束：" << endl;
	while (1) {
		cin >> c;
		if (c == '#')break;
		m[c]++;
	}

	for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << "出現次數：" << it->second << endl;
	}

	return 0;
}