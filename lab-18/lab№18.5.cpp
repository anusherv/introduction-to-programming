#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, x, j;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива A" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (i = 1; a[0] > a[i]; i++) {
		j = i;
	}
	x = a[0];
	for (i = 1; i <= j; i++) {
		a[i - 1] = a[i];
	}
	a[j] = x;
	for (i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}
