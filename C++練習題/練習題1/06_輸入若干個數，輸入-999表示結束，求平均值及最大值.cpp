//��J�Y�z�ӼơA��J-999��ܵ����A�D�����Ȥγ̤j��
#include <iostream>
using namespace std;

int main() {
	int tmpNum = 0;
	int count = 0;
	double max = 0;
	double average = 0;
	double sum = 0;
	cout << "�H�K��J�Y�z�ӼơA��J-999��ܵ����G" << endl;
	do
	{
		cin >> tmpNum;
		if (tmpNum == -999)break;

		if (tmpNum > max) {
			max = tmpNum;
		}
		sum += tmpNum;
		count++;
	} while (tmpNum !=-999);
	average = sum / count;
	cout << "�����ȡB�̤j�ȡG" << average << "�B" << max << endl;
	return 0;
}