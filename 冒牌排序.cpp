#include<iostream>
using namespace std;
int main() {
	//ð������
	int num[] = { 3,2,4,6,5,8,7,1,0 };
	//����ǰ
	for (int m = 0; m < 9; m++) {
		cout << num[m] << " ";
	}
	cout << endl;
	for (int i = 0;i<8; i++) {
		for (int j = 0; j <8-i; j++) {
			if (num[j] > num[j + 1]) {
				int temp = num[j];
				num[j] = num[j + 1];
                num[j + 1] = temp;
            }
		}
	}
	//
	//�����
	for (int n = 0; n < 9; n++) {
		cout << num[n] << " ";
	}
	cout << sizeof(int*) << endl;
	return 0;
}