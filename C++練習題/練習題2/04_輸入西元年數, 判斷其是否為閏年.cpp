//4.��J�褸�~��, �P�_��O�_���|�~
/*
�|�~�W�h
�ثe�ϥΪ��樽���Q��|�~�W�h�p�U[1]�G

1.�����~���D4�����ơA�����~�C
2.�����~����4�����Ʀ��D100�����ơA���|�~�C
3.�����~����100�����Ʀ��D400�����ơA�����~�C
4.�����~����400�����Ƭ��|�~�C
*/

#include <iostream>
#include <string>
using namespace std;

//�ڪ��Ѫk
int main() {
	int year = 0;
	string whatYear = "";
	cout << "��J�褸�~�ơG" << endl;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0) {
		whatYear = "�|�~";
	}
	else if (year % 400 == 0) {
		whatYear = "�|�~";
	}
	else {
		whatYear = "���~";
	}
	cout << whatYear << endl;
}