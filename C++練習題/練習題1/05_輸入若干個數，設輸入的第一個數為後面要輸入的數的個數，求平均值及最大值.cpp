//块璝计砞块材计璶块计计―キАの程
#include <iostream>
using namespace std;

int main() {
	double num = 0, max = 0, sum = 0, average = 0, tmpNum = 0;
	cout << "繦獽块璝计( 块材计璶块计计 )" << endl;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> tmpNum;
		if (tmpNum > max) {
			max = tmpNum;
		}
		sum += tmpNum;
	}
	average = sum / num;
	cout << "程キАだ" << max << "" << average << endl;
	return 0;
}