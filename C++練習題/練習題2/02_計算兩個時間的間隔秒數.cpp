//2.計算兩個時間 (時:分:秒) 的間隔秒數

#include <iostream>
using namespace std;

//我的解法
int main() {
	int h1 = 0, m1 = 0, s1 = 0;
	int h2 = 0, m2 = 0, s2 = 0;
	int timer1 = 0, timer2 = 0, gap = 0;
	cout << " (第一個時間) 依次序輸入時、分、秒：";
	cin >> h1 >> m1 >> s1;
	cout << " (第二個時間) 依次序輸入時、分、秒：";
	cin >> h2 >> m2 >> s2;
	timer1 = h1 * 3600 + m1 * 60 + s1;
	timer2 = h2 * 3600 + m2 * 60 + s2;
	gap = timer1 > timer2 ? timer1 - timer2 : timer2 - timer1;
	cout << "兩個時間的間隔秒數為：" << gap << "(s)" << endl;
	return 0;
}
