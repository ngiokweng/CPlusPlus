//001.將輸入之秒數轉換成「時:分:秒」

#include <iostream>
using namespace std;

//我的解法
int main() {
	int s = 0, h = 0, m = 0;
	cout << "輸入秒數：" << endl;
	cin >> s;
	while (s-60>=0) {
		s -= 60;
		m++;
	}
	while (m - 60 >= 0) {
		m -= 60;
		h++;
	}

	cout << "轉換後(時:分:秒)：「" << h << ":" << m <<":" << s << "」" << endl;
	return 0;
}

////其他解法(1)
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