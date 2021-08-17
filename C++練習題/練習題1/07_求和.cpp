//¨D©Ms=1X1 + 2X2 + 3X3 +...+ 100X100
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i <= 3; i++) {
		sum += i * i;
	}
	cout << "sum == " << sum;
	return 0;
}