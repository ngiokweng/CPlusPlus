//20�ӼơA�D��̤j�B�̤p�M������

#include <iostream>
using namespace std;

int main() {
	int arr[20] = { 23,132,6,34,43,123,745,45,45,230,
						  13,135,756,2,46,345,76,23,87,1222 };
	int max = arr[0], min = arr[0], sum = 0, average = 0;
	for (int i = 0; i < 20; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		else if(arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}
	average = sum / 20;
	cout << "�̤j�ȡB�̤p�ȡB�����Ȥ��O���G" << max << "�B"<<min << "�B"<<average << endl;

	return 0;
}