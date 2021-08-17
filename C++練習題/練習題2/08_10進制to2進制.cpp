//8.十進制轉二進制
#include <iostream>
#include <string>
using namespace std;

////解法1
//string toBinary(int n)
//{
//    string r,tmp;
//    int count = 0;
//    while (n != 0) {
//        r += (n % 2 == 0 ? "0" : "1");
//        n /= 2;
//        count++;
//    }
//    //例序
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

//解法2
int main() {
    int num;
    cin >> num;

    int a = num, b, ten = 1, sum = 0;
    //a：先存入要轉換的數字，之後進行運算。
    //b：用來存餘數。
    //ten：為了讓答案變成倒的，每次乘以10倍。
    //sum：用來加總答案。

    while (a > 0) { //不斷做直到a=1時
        b = a % 2; //b用來計算餘數
        a /= 2; //計算餘數之後，就可以把a除以2了！
        sum += b * ten; //把b值乘以10，存進sum答案中。(第一次乘以1)
        ten *= 10; //因為二進位是從下而上的餘數，所以我們每次乘以10，就會變倒的了！
    }

    cout << sum << endl;
}