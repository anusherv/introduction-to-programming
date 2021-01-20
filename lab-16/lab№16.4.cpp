#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива" << endl;
	int *a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (i = 0; i <= N/2; i++) {
		cout << a[i] << " ";
		if (N-1-i != i) {
			cout << a[N - 1 - i] << " ";
		}
	}
}
