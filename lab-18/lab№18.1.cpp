#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, j, x;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива A" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	cout << "введите элементы массива B" << endl;
	int* b = new int[N];
	for (i = 0; i < N; i++) {
		cin >> b[i];
	}
	for (i = 0; i < N; i++) {	
		x = a[i];
		a[i] = b[i];
		b[i] = x;
	}
	cout << endl << "элементы массива A: ";
	for (i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl << "элементы массива B: ";
	for (i = 0; i < N; i++) {
		cout << b[i] << " ";
	}
}
