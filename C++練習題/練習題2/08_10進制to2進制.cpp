//8.�Q�i����G�i��
#include <iostream>
#include <string>
using namespace std;

////�Ѫk1
//string toBinary(int n)
//{
//    string r,tmp;
//    int count = 0;
//    while (n != 0) {
//        r += (n % 2 == 0 ? "0" : "1");
//        n /= 2;
//        count++;
//    }
//    //�ҧ�
//    for (int i = count-1;i >= 0; i--) {
//        tmp += r[i];
//    }
//    cout << count << endl;
//    return tmp;
//}
//
//int main() {
//    int number = 8;
//
//    cout << "decimal: " << number << endl;
//    cout << "binary : " << toBinary(number) << endl;
//
//    return EXIT_SUCCESS;
//}

//�Ѫk2
int main() {
    int num;
    cin >> num;

    int a = num, b, ten = 1, sum = 0;
    //a�G���s�J�n�ഫ���Ʀr�A����i��B��C
    //b�G�ΨӦs�l�ơC
    //ten�G���F�������ܦ��˪��A�C�����H10���C
    //sum�G�Ψӥ[�`���סC

    while (a > 0) { //���_������a=1��
        b = a % 2; //b�Ψӭp��l��
        a /= 2; //�p��l�Ƥ���A�N�i�H��a���H2�F�I
        sum += b * ten; //��b�ȭ��H10�A�s�isum���פ��C(�Ĥ@�����H1)
        ten *= 10; //�]���G�i��O�q�U�ӤW���l�ơA�ҥH�ڭ̨C�����H10�A�N�|�ܭ˪��F�I
    }

    cout << sum << endl;
}