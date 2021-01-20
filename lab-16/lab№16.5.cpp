#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, c;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива" << endl;
	int *a = new int[N];
	if (N % 2 == 0) {
		c = N - 2;
	}
	else {
		c = N - 1;
	}
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (i = 1; i < N; i += 2) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = c; i >= 0; i -= 2) {
		cout << a[i] << " ";
	}
}
