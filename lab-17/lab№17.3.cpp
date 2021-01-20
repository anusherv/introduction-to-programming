#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, m;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	m=a[1];
	for (i = 3; i < N; i+=2) {
		if (a[i] < m)
			m = a[i];
	}
	cout << "минимальный элемент=" << m;
}
