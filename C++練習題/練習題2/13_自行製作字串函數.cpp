#include <iostream>
using namespace std;

/*
���СG�ۦ�s�@�r���� strlen(const char* str)
��^�ȡG�r�Ŧ����
*/
int myStrlen(const char* str) {
	int i = 0;
	while (str[i] != 0){
		i++;
	}
	return i;
}

/*
���СG�ۦ�s�@�r���� strcmp(const char* leftStr, const char* rightStr)
��^�ȡG0( ��r�Ŧ�ASCII�X�۵� )�B1( leftStr > rightStr )�B-1( leftStr < rightStr )
*/
int myStrcmp(const char* leftStr, const char* rightStr) {
	//�P�_�en�쪺ASCII�X�A��X�{���۵������p�N��^
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

	//��en�쪺ASCII�X���ۦP�ɡA�H���רӧP�_
	if (myStrlen(leftStr) == myStrlen(rightStr)) {
		return 0;
	}else if (myStrlen(leftStr) > myStrlen(rightStr)) {
		return 1;
	}else {
		return -1;
	}
}

/*
���СG�ۦ�s�@�r���� strcat(char* dest,char* src)
�`�N�G�եθӨ�ƮɡA�ǤJ��dest���s�Ŷ��n���H�A���Jsrc�A�_�h�{�Ƿ|�Y��
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
	cout << "myStrlen()�G" << myStrlen(str) << endl;
	cout << "myStrcmp()�G" << myStrcmp(str, str2) << endl;
	myStrcat(str, str2);
	cout << "myStrcat()�G" << str << endl;
	return 0;
}