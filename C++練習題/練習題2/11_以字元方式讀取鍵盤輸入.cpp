//11.�H�r���覡Ū����L��J��Ū���u#�v�r������A�p���Ū�����U�r�����X�{���ơC

#include <iostream>
#include <map>
using namespace std;

int main() {
	char c = ' ';
	map<char, int> m;
	cout << "�H�K��J���N�r���A��J\"#\"�N�����G" << endl;
	while (1) {
		cin >> c;
		if (c == '#')break;
		m[c]++;
	}

	for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << "�X�{���ơG" << it->second << endl;
	}

	return 0;
}