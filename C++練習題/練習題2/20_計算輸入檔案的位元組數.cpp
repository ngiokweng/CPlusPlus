//20.�ۦ�g�@�ӵ{���p���J�ɮ�(�p.txt��)���줸�ռ�


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string fileName = " ";
	cout << "��J�����|�G";
	cin >> fileName;			//���|�n�H ' / ' ���}�A�p�GC:/Users/MSI-PC/Desktop/tt.txt

	ifstream ifs;
	ifs.open(fileName,ios::in);
	if (!ifs.is_open()) {
		cout << "��󥴶}���ѡA���ˬd���|" << endl;
		ifs.close();
		return 0;
	}

	char buf[2] = " ";
	int size = 0;
	while (ifs.read(buf,1)) {
		cout << buf << endl;
		size++;
	}
	cout << "�ɮת��줸�ռơG" << size << endl;
	ifs.close();

	return 0;
}