//4.块﹁じ计, 耞ㄤ琌秥
/*
秥砏玥
ヘ玡ㄏノń蔼句秥砏玥[1]

1.そじだ獶4计キ
2.そじだ4计獶100计秥
3.そじだ100计獶400计キ
4.そじだ400计秥
*/

#include <iostream>
#include <string>
using namespace std;

//и秆猭
int main() {
	int year = 0;
	string whatYear = "";
	cout << "块﹁じ计" << endl;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0) {
		whatYear = "秥";
	}
	else if (year % 400 == 0) {
		whatYear = "秥";
	}
	else {
		whatYear = "キ";
	}
	cout << whatYear << endl;
}