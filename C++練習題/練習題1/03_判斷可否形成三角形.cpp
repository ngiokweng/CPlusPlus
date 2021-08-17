//輸入3個double類型的值，判斷這3個值是否可以表示一個三角形的三條邊

#include <iostream>
#include <string>
using namespace std;

int main() {
	double a, b, c;
	string result = "這3個值可以表示一個三角形的三條邊";
	cout << "分別輸入三條邊長：" << endl;
	cin >> a >> b >> c;
	if ((a + b) <= c) {
		result = "這3個值不可以表示一個三角形的三條邊";
	}else if ((a + c) <= b) {
		result = "這3個值不可以表示一個三角形的三條邊";
	}
	else if ((c + b) <= a) {
		result = "這3個值不可以表示一個三角形的三條邊";
	}
	cout << result << endl;

	return 0;
}