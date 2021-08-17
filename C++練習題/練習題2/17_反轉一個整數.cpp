//17.反轉一個整數。如123 -> 321 ，900 -> 9

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