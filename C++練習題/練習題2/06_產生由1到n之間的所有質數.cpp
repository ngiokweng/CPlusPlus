//6.產生由 1 到 n (n >= 1) 之間的所有質數。

#include <iostream>
using namespace std;

//我的解法
int main() {
	int n = 0;
	cout << "產生由 1 到 n (n >= 1) 之間的所有質數，輸入n：" << endl;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		bool flag = false;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0 && i != j) {
				flag = false;
				break;
			}
			else {
				flag = true;
			}
		}
		if (flag) {
			cout << i << " ";
		}
	}
	return 0;
}

//簡易一D
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    bool flag = true;
//    for (int i = 2; i <= 20; i++) {
//        for (int j = 2; j < i; j++) {
//            if (i % j == 0)flag = false;
//        }
//        if (flag)cout << i << endl;
//        flag = true;
//    }
//}
