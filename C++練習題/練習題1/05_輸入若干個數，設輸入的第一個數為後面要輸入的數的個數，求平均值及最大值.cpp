//��J�Y�z�ӼơA�]��J���Ĥ@�ӼƬ��᭱�n��J���ƪ��ӼơA�D�����Ȥγ̤j��
#include <iostream>
using namespace std;

int main() {
	double num = 0, max = 0, sum = 0, average = 0, tmpNum = 0;
	cout << "�H�K��J�Y�z�Ӽ�( ��J���Ĥ@�ӼƬ��᭱�n��J���ƪ��Ӽ� )�G" << endl;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> tmpNum;
		if (tmpNum > max) {
			max = tmpNum;
		}
		sum += tmpNum;
	}
	average = sum / num;
	cout << "�̤j�ȡB�����Ȥ��O���G" << max << "�B" << average << endl;
	return 0;
}