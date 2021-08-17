//印度國王的獎勵，求和2的0次方加到2的63次方
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double sum = 0;
	for (int i = 0; i <= 63; i++) {
		sum += pow(2, i);
	}
	cout << "2的0次方加到2的63次方：" << sum;
	return 0;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	double sum = 1, temp = 1;
//	for (int i = 1; i < 64; i++)
//	{
//		temp = temp * 2;
//		sum = sum + temp;
//	}
//	cout << sum << endl;
//	return 0;
//}