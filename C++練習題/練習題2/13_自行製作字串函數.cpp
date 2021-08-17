#include <iostream>
using namespace std;

/*
介紹：自行製作字串函數 strlen(const char* str)
返回值：字符串長度
*/
int myStrlen(const char* str) {
	int i = 0;
	while (str[i] != 0){
		i++;
	}
	return i;
}

/*
介紹：自行製作字串函數 strcmp(const char* leftStr, const char* rightStr)
返回值：0( 兩字符串ASCII碼相等 )、1( leftStr > rightStr )、-1( leftStr < rightStr )
*/
int myStrcmp(const char* leftStr, const char* rightStr) {
	//判斷前n位的ASCII碼，當出現不相等的情況就返回
	int i = 0;
	while (leftStr[i] != 0 && rightStr[i] != 0){
		if (leftStr[i] > rightStr[i]) {
			return 1;
		}
		else if (leftStr[i] < rightStr[i]) {
			return -1;
		}
		i++;
	}

	//當前n位的ASCII碼都相同時，以長度來判斷
	if (myStrlen(leftStr) == myStrlen(rightStr)) {
		return 0;
	}else if (myStrlen(leftStr) > myStrlen(rightStr)) {
		return 1;
	}else {
		return -1;
	}
}

/*
介紹：自行製作字串函數 strcat(char* dest,char* src)
注意：調用該函數時，傳入的dest內存空間要足以再插入src，否則程序會崩潰
*/
void myStrcat(char* dest,char* src) {
	int destLen = myStrlen(dest);
	int srcLen = myStrlen(src);

	for (int i = 0; i < srcLen; i++) {
		dest[destLen + i] += src[i];
	}
}

int main() {
	char str[10] = "abc1";
	char str2[] = "bca";
	cout << "myStrlen()：" << myStrlen(str) << endl;
	cout << "myStrcmp()：" << myStrcmp(str, str2) << endl;
	myStrcat(str, str2);
	cout << "myStrcat()：" << str << endl;
	return 0;
}