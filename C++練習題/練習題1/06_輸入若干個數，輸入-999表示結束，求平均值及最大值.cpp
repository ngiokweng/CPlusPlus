//輸入若干個數，輸入-999表示結束，求平均值及最大值
#include <iostream>
using namespace std;

int main() {
	int tmpNum = 0;
	int count = 0;
	double max = 0;
	double average = 0;
	double sum = 0;
	cout << "隨便輸入若干個數，輸入-999表示結束：" << endl;
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
	cout << "平均值、最大值：" << average << "、" << max << endl;
	return 0;
}