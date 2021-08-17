#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a, b, c,delta,result1,result2;
	cout << "ax2+bx+c = 0，按順序輸入a、b、c" << endl;
	cin >> a >> b >> c;
	delta = pow(b, 2) - 4 * a * c;
	if (delta < 0 || (a==0&&b==0)) {
		cout << "此方程無解" << endl;
		return 0;
	}
	if (a == 0) {
		cout << "該方程的根分為：" << -c / b;
		return 0;
	}
	result1 = (-b + pow(delta, 0.5)) / (2 * a);
	result2 = (-b - pow(delta, 0.5)) / (2 * a);
	cout << "該方程的根分別為：" << result1 << " 或 " << result2 << endl;

	
	return 0;
}