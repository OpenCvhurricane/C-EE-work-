#include<iostream>
using namespace std;
int maxl(int a, int b, int c) {
	int tmp = a > b ? a : b;
	int max = tmp > c ? tmp : c;
	return max;
}
double maxl(double a, double b, double c) {
	double tmp = a > b ? a : b;
	double max = tmp > c ? tmp : c;
	return max;

}
int main() {
	double a, b, c,d;
	for (;;) {
		cout << "��������������������С��" << endl;
		cin >> a >> b >> c;
		if ((a - (int)a) != 0) {
			cout << "��������С��" << endl;
			cout << "���ֵΪ" << maxl(a, b, c) << endl;
		}
		else {
			cout << "������������" << endl;
			cout << "���ֵΪ" << maxl((int)a, (int)b, (int)c) << endl;;
		}
		cout << "��0��������1�˳�" << endl;
		cin >> d; 
		if (d) {
			break;

		

		}
		else {
			continue;
		}
	}
	return 0;
}
