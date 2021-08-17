//12.盢块﹃ぇ璣ゅダ糶が传
// a : 0110 0001
// A : 0100 0001

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "";
	cout << "块才﹃(絛瞅a~Z)" << endl;
	cin >> str;
	cout << "才﹃" << str << endl;
	for (int i = 0; i < str.length(); i++) {
		//223(10秈) == 11011111(2秈)
		//32(10秈)   == 00100000(2秈)
		str[i] = str[i] >= 97 ? (str[i] & 223) : (str[i] | 32);
	}
	cout << "糶锣传" << str << endl;
	return 0;
}