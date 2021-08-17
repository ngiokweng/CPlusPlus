//¨D©Ms=1! + 2! + 3! +...+ 10!
#include <iostream>
using namespace std;

int main() {
	double sum = 0, tmp = 1;
	int j = 0;
	for (int i = 1; i <= 10; i++) {
		j = i;
		while (j > 0) {
			tmp = tmp * j;
			j--;
		}
		sum += tmp;
		tmp = 1;
	}
	cout << "sum == " << sum;
	return 0;
}
