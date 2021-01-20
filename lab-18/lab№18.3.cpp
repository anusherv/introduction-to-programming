#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, x = 0;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива A" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (i = N - 1; i >= 0; i--) {
		if ((a[i] % 2 == 1) && (x == 0)) {
			x = a[i];
		}
		if (a[i] % 2 == 1) {
			a[i] += x;
		}
	}
	for (i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}
