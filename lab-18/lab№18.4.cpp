#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, min, max, imin, imax;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива A" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	if (a[0] > a[1]) {
		max = a[0];
		imax = 0;
		min = a[1];
		imin = 1;
	}
	else {
		max = a[1];
		imax = 1;
		min = a[0];
		imin = 0;
	}
	for (i = 2; i < N; i++) {
		if (a[i] > max) {
			max = a[i];
			imax = i;
		}
		if (a[i] < min) {
			min = a[i];
			imin = i;
		}
	}
	if (imin < imax) {
		for (i = imin + 1; i < imax; i++) {
			a[i] = 0;
		}
	}
	if (imin > imax) {
		for (i = imin - 1; i > imax; i--) {
			a[i] = 0;
		}
	}
	for (i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}
