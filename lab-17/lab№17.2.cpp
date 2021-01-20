#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, d;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	d = a[1] - a[0];
	for (i = 2; i < N; i++) {
		if (d != a[i] - a[i-1]) {
			d=0;
			break;
		}
	}
	cout << "d=" << d;
}
