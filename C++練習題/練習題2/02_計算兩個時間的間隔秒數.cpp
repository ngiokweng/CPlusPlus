//2.�p���Ӯɶ� (��:��:��) �����j���

#include <iostream>
using namespace std;

//�ڪ��Ѫk
int main() {
	int h1 = 0, m1 = 0, s1 = 0;
	int h2 = 0, m2 = 0, s2 = 0;
	int timer1 = 0, timer2 = 0, gap = 0;
	cout << " (�Ĥ@�Ӯɶ�) �̦��ǿ�J�ɡB���B��G";
	cin >> h1 >> m1 >> s1;
	cout << " (�ĤG�Ӯɶ�) �̦��ǿ�J�ɡB���B��G";
	cin >> h2 >> m2 >> s2;
	timer1 = h1 * 3600 + m1 * 60 + s1;
	timer2 = h2 * 3600 + m2 * 60 + s2;
	gap = timer1 > timer2 ? timer1 - timer2 : timer2 - timer1;
	cout << "��Ӯɶ������j��Ƭ��G" << gap << "(s)" << endl;
	return 0;
}
