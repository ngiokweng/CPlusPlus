//10.ªwªj±Æ§Çªk

#include <iostream>
using namespace std;

int main() {
	int arr[] = { 1,23,4,95,34,543,53,1,45,34,5,234 };
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < len - 1; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}