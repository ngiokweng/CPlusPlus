//001.�N��J������ഫ���u��:��:��v

#include <iostream>
using namespace std;

//�ڪ��Ѫk
int main() {
	int s = 0, h = 0, m = 0;
	cout << "��J��ơG" << endl;
	cin >> s;
	while (s-60>=0) {
		s -= 60;
		m++;
	}
	while (m - 60 >= 0) {
		m -= 60;
		h++;
	}

	cout << "�ഫ��(��:��:��)�G�u" << h << ":" << m <<":" << s << "�v" << endl;
	return 0;
}

////��L�Ѫk(1)
//int main()
//{
//	int timer;
//
//	cout << "Please input second to transfer:";
//	cin >> timer;
//	cout.fill('0');
//	cout.width(2);
//	cout << timer / 3600 << ":";
//	timer -= (timer / 3600) * 3600;
//	cout << timer / 60 << ":";
//	timer -= (timer / 60) * 60;
//	cout << timer;
//}