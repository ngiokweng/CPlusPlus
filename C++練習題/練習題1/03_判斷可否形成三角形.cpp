//��J3��double�������ȡA�P�_�o3�ӭȬO�_�i�H��ܤ@�ӤT���Ϊ��T����

#include <iostream>
#include <string>
using namespace std;

int main() {
	double a, b, c;
	string result = "�o3�ӭȥi�H��ܤ@�ӤT���Ϊ��T����";
	cout << "���O��J�T������G" << endl;
	cin >> a >> b >> c;
	if ((a + b) <= c) {
		result = "�o3�ӭȤ��i�H��ܤ@�ӤT���Ϊ��T����";
	}else if ((a + c) <= b) {
		result = "�o3�ӭȤ��i�H��ܤ@�ӤT���Ϊ��T����";
	}
	else if ((c + b) <= a) {
		result = "�o3�ӭȤ��i�H��ܤ@�ӤT���Ϊ��T����";
	}
	cout << result << endl;

	return 0;
}