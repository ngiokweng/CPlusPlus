#include <iostream>
using namespace std;

int main() {
	int nums[3];
	cout << "�п�J3�ӼơG" << endl;
	cin >> nums[0] >> nums[1] >> nums[2];
	int max = nums[0];
	for (int i = 1; i < 3; i++) {
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	cout << "max == " << max;
	return 0;
}