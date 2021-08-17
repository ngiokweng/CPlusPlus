//20.自行寫一個程式計算輸入檔案(如.txt檔)的位元組數


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string fileName = " ";
	cout << "輸入文件路徑：";
	cin >> fileName;			//路徑要以 ' / ' 分開，如：C:/Users/MSI-PC/Desktop/tt.txt

	ifstream ifs;
	ifs.open(fileName,ios::in);
	if (!ifs.is_open()) {
		cout << "文件打開失敗，請檢查路徑" << endl;
		ifs.close();
		return 0;
	}

	char buf[2] = " ";
	int size = 0;
	while (ifs.read(buf,1)) {
		cout << buf << endl;
		size++;
	}
	cout << "檔案的位元組數：" << size << endl;
	ifs.close();

	return 0;
}