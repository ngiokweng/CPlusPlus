//6.���ͥ� 1 �� n (n >= 1) �������Ҧ���ơC

#include <iostream>
using namespace std;

//�ڪ��Ѫk
int main() {
	int n = 0;
	cout << "���ͥ� 1 �� n (n >= 1) �������Ҧ���ơA��Jn�G" << endl;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		bool flag = false;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0 && i != j) {
				flag = false;
				break;
			}
			else {
				flag = true;
			}
		}
		if (flag) {
			cout << i << " ";
		}
	}
	return 0;
}