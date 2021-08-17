//9.印出兩個 3 * 3 矩陣的乘積。

#include <iostream>
using namespace std;

//我的解法
int main() {
	int arr1[3][3] = { { 1, 2, 3 },
							   { 4, 5, 6 },
							   { 7, 8, 9 } };

	int arr2[3][3] = { { 1, 2, 3 },
							   { 4, 5, 6 },
							   { 7, 8, 9 } }; 
	int resArr[3][3] = { 0 };

	int tmp = 0;
	//實現兩矩陣相乘
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				resArr[i][k] += arr1[i][j] * arr2[j][k];
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << resArr[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}