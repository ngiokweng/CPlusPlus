//17.����@�Ӿ�ơC�p123 -> 321 �A900 -> 9

#include <iostream>
using namespace std;

int main() {
	int number = 902130;
	int reverseNum = 0;
	while (number != 0) {
		reverseNum *= 10;
		reverseNum += number % 10;
		number /= 10;
	}
	cout << reverseNum << endl;
	return 0;
}